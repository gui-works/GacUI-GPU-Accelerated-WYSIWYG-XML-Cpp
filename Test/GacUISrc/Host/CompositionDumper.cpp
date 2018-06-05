#include "ResourceCompiler.h"

using namespace vl::collections;
using namespace vl::stream;
using namespace vl::parsing::xml;
using namespace vl::reflection::description;
using namespace vl::presentation;
using namespace vl::presentation::elements;
using namespace vl::presentation::compositions;
using namespace vl::presentation::controls;
using namespace vl::presentation::templates;

bool IsPrimitive(Value value)
{
	if (value.IsNull()) return false;
	auto td = value.GetTypeDescriptor();
	return (td->GetTypeDescriptorFlags() & TypeDescriptorFlags::Primitive) != TypeDescriptorFlags::Undefined;
}

bool IsStruct(Value value)
{
	if (value.IsNull()) return false;
	auto td = value.GetTypeDescriptor();
	return (td->GetTypeDescriptorFlags() & TypeDescriptorFlags::Struct) != TypeDescriptorFlags::Undefined;
}

bool IsEnum(Value value)
{
	if (value.IsNull()) return false;
	auto td = value.GetTypeDescriptor();
	return (td->GetTypeDescriptorFlags() & TypeDescriptorFlags::EnumType) != TypeDescriptorFlags::Undefined;
}

WString ValueToString(Value value)
{
	auto td = value.GetTypeDescriptor();
	if (td==GetTypeDescriptor<WString>())
	{
		return L"'" + UnboxValue<WString>(value) + L"'";
	}
	else if (auto serializableType = td->GetSerializableType())
	{
		WString result;
		serializableType->Serialize(value, result);
		return result;
	}
	else if (auto enumType = td->GetEnumType())
	{
		WString result;
		auto enumValue = enumType->FromEnum(value);
		vint count = enumType->GetItemCount();
		for (vint i = 0; i < count; i++)
		{
			if (enumValue & enumType->GetItemValue(i))
			{
				result = result == L"" ? enumType->GetItemName(i) : result + L" | " + enumType->GetItemName(i);
			}
		}
		return result;
	}
	else
	{
		WString result;
		vint propCount = td->GetPropertyCount();
		for (vint i = 0; i < propCount; i++)
		{
			auto prop = td->GetProperty(i);
			auto item = prop->GetName() + L":" + ValueToString(prop->GetValue(value));
			result = result == L"" ? item : result + L" | " + item;
		}
		return L"{" + result + L"}";
	}
}

template<typename T>
WString PointerToHex(T* pointer)
{
	WString result;
	vuint64_t value = (vuint64_t)pointer;
	while (value)
	{
		result = "0123456789ABCDEF"[value % 16] + result;
		value /= 16;
	}
	return result;
}

WString TypeNameToName(const WString& typeName)
{
	List<WString> fragments;
	SplitBySemicolon(typeName, fragments);
	auto element = MakePtr<XmlElement>();
	element->name.value = fragments[fragments.Count() - 1];
}

Ptr<XmlElement> DumpCompositionToXml(GuiGraphicsComposition* composition)
{
	auto td = composition->GetTypeDescriptor();
	auto tdRoot = GetTypeDescriptor<GuiGraphicsComposition>();
	auto element = MakePtr<XmlElement>();
	element->name.value = TypeNameToName(td->GetTypeName());

	auto currentTd = td;
	while (true)
	{
		Dictionary<WString, WString> props;
		vint propCount = currentTd->GetPropertyCount();
		for (vint i = 0; i < propCount; i++)
		{
			auto prop = currentTd->GetProperty(i);
			auto propValue = prop->GetValue(Value::From(composition));

			if (IsPrimitive(propValue) || IsStruct(propValue) || IsEnum(propValue))
			{
				props.Add(prop->GetName(), ValueToString(propValue));
			}
		}

		if (auto table = dynamic_cast<GuiTableComposition*>(composition))
		{
			{
				WString value;
				vint count = table->GetRows();
				for (vint i = 0; i < count; i++)
				{
					auto option = table->GetRowOption(i);
					switch (option.composeType)
					{
					case GuiCellOption::Absolute: value = L"A" + itow(option.absolute); break;
					case GuiCellOption::Percentage: value = L"P" + ftow(option.percentage); break;
					case GuiCellOption::MinSize: value = L"M"; break;
					}
				}
				props.Add(L"Rows", value);
			}
			{
				WString value;
				vint count = table->GetColumns();
				for (vint i = 0; i < count; i++)
				{
					auto option = table->GetColumnOption(i);
					switch (option.composeType)
					{
					case GuiCellOption::Absolute: value = L"A" + itow(option.absolute); break;
					case GuiCellOption::Percentage: value = L"P" + ftow(option.percentage); break;
					case GuiCellOption::MinSize: value = L"M"; break;
					}
				}
				props.Add(L"Columns", value);
			}
		}

		for (vint i = 0; i < props.Count(); i++)
		{
			auto attr = MakePtr<XmlAttribute>();
			attr->name.value = props.Keys()[i];
			attr->value.value = props.Values()[i];
			element->attributes.Insert(i, attr);
		}

		vint baseCount = currentTd->GetBaseTypeDescriptorCount();
		for (vint i = 0; i < baseCount; i++)
		{
			auto baseTd = currentTd->GetBaseTypeDescriptor(i);
			if (baseTd->CanConvertTo(tdRoot))
			{
				currentTd = baseTd;
				continue;
			}
		}
		break;
	}

	{
		auto attr = MakePtr<XmlAttribute>();
		attr->name.value = L"Address";
		attr->value.value = PointerToHex(composition);
		element->attributes.Insert(0, attr); 
	}

	SortedList<GuiGraphicsComposition*> dumped;
	if (auto stack = dynamic_cast<GuiStackComposition*>(composition))
	{
		FOREACH(GuiStackItemComposition*, child, stack->GetStackItems())
		{
			dumped.Add(child);
			auto childXml = DumpCompositionToXml(child);
			childXml->name.value = L"si:" + childXml->name.value;
			element->subNodes.Add(childXml);
		}
	}
	if (auto flow = dynamic_cast<GuiFlowComposition*>(composition))
	{
		FOREACH(GuiFlowItemComposition*, child, flow->GetFlowItems())
		{
			dumped.Add(child);
			auto childXml = DumpCompositionToXml(child);
			childXml->name.value = L"fi:" + childXml->name.value;
			element->subNodes.Add(childXml);
		}
	}

	FOREACH(GuiGraphicsComposition*, child, composition->Children())
	{
		if (!dumped.Contains(child))
		{
			auto childXml = DumpCompositionToXml(child);
			element->subNodes.Add(childXml);
		}
	}

	return element;
}

void DumpComposition(GuiGraphicsComposition* composition, TextWriter& writer)
{
}