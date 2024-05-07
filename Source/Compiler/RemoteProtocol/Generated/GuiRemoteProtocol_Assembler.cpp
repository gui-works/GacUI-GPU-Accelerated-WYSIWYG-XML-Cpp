/***********************************************************************
This file is generated by: Vczh Parser Generator
From parser definition:GuiRemoteProtocol
Licensed under https://github.com/vczh-libraries/License
***********************************************************************/

#include "GuiRemoteProtocol_Assembler.h"

namespace vl::presentation::remoteprotocol
{

/***********************************************************************
GuiRemoteProtocolAstInsReceiver : public vl::glr::AstInsReceiverBase
***********************************************************************/

	vl::Ptr<vl::glr::ParsingAstBase> GuiRemoteProtocolAstInsReceiver::CreateAstNode(vl::vint32_t type)
	{
		auto cppTypeName = GuiRemoteProtocolCppTypeName((GuiRemoteProtocolClasses)type);
		switch((GuiRemoteProtocolClasses)type)
		{
		case GuiRemoteProtocolClasses::ArrayMapType:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpArrayMapType);
		case GuiRemoteProtocolClasses::ArrayType:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpArrayType);
		case GuiRemoteProtocolClasses::Attribute:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpAttribute);
		case GuiRemoteProtocolClasses::EnumDecl:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpEnumDecl);
		case GuiRemoteProtocolClasses::EnumMember:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpEnumMember);
		case GuiRemoteProtocolClasses::EventDecl:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpEventDecl);
		case GuiRemoteProtocolClasses::EventRequest:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpEventRequest);
		case GuiRemoteProtocolClasses::MessageDecl:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpMessageDecl);
		case GuiRemoteProtocolClasses::MessageRequest:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpMessageRequest);
		case GuiRemoteProtocolClasses::MessageResponse:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpMessageResponse);
		case GuiRemoteProtocolClasses::OptionalType:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpOptionalType);
		case GuiRemoteProtocolClasses::PrimitiveType:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpPrimitiveType);
		case GuiRemoteProtocolClasses::ReferenceType:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpReferenceType);
		case GuiRemoteProtocolClasses::Schema:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpSchema);
		case GuiRemoteProtocolClasses::StructDecl:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpStructDecl);
		case GuiRemoteProtocolClasses::StructMember:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpStructMember);
		case GuiRemoteProtocolClasses::UnionDecl:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpUnionDecl);
		case GuiRemoteProtocolClasses::UnionMember:
			return vl::Ptr(new vl::presentation::remoteprotocol::GuiRpUnionMember);
		default:
			return vl::glr::AssemblyThrowCannotCreateAbstractType(type, cppTypeName);
		}
	}

	void GuiRemoteProtocolAstInsReceiver::SetField(vl::glr::ParsingAstBase* object, vl::vint32_t field, vl::Ptr<vl::glr::ParsingAstBase> value)
	{
		auto cppFieldName = GuiRemoteProtocolCppFieldName((GuiRemoteProtocolFields)field);
		switch((GuiRemoteProtocolFields)field)
		{
		case GuiRemoteProtocolFields::ArrayType_element:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpArrayType::element, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::Declaration_attributes:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpDeclaration::attributes, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::EnumDecl_members:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpEnumDecl::members, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::EventDecl_request:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpEventDecl::request, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::EventRequest_type:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpEventRequest::type, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::MessageDecl_request:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpMessageDecl::request, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::MessageDecl_response:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpMessageDecl::response, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::MessageRequest_type:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpMessageRequest::type, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::MessageResponse_type:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpMessageResponse::type, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::OptionalType_element:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpOptionalType::element, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::Schema_declarations:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpSchema::declarations, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::StructDecl_members:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpStructDecl::members, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::StructMember_type:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpStructMember::type, object, field, value, cppFieldName);
		case GuiRemoteProtocolFields::UnionDecl_members:
			return vl::glr::AssemblerSetObjectField(&vl::presentation::remoteprotocol::GuiRpUnionDecl::members, object, field, value, cppFieldName);
		default:
			return vl::glr::AssemblyThrowFieldNotObject(field, cppFieldName);
		}
	}

	void GuiRemoteProtocolAstInsReceiver::SetField(vl::glr::ParsingAstBase* object, vl::vint32_t field, const vl::regex::RegexToken& token, vl::vint32_t tokenIndex)
	{
		auto cppFieldName = GuiRemoteProtocolCppFieldName((GuiRemoteProtocolFields)field);
		switch((GuiRemoteProtocolFields)field)
		{
		case GuiRemoteProtocolFields::ArrayMapType_element:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpArrayMapType::element, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::ArrayMapType_keyField:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpArrayMapType::keyField, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::Attribute_cppType:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpAttribute::cppType, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::Attribute_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpAttribute::name, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::Declaration_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpDeclaration::name, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::EnumMember_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpEnumMember::name, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::ReferenceType_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpReferenceType::name, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::StructMember_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpStructMember::name, object, field, token, tokenIndex, cppFieldName);
		case GuiRemoteProtocolFields::UnionMember_name:
			return vl::glr::AssemblerSetTokenField(&vl::presentation::remoteprotocol::GuiRpUnionMember::name, object, field, token, tokenIndex, cppFieldName);
		default:
			return vl::glr::AssemblyThrowFieldNotToken(field, cppFieldName);
		}
	}

	void GuiRemoteProtocolAstInsReceiver::SetField(vl::glr::ParsingAstBase* object, vl::vint32_t field, vl::vint32_t enumItem, bool weakAssignment)
	{
		auto cppFieldName = GuiRemoteProtocolCppFieldName((GuiRemoteProtocolFields)field);
		switch((GuiRemoteProtocolFields)field)
		{
		case GuiRemoteProtocolFields::PrimitiveType_type:
			return vl::glr::AssemblerSetEnumField(&vl::presentation::remoteprotocol::GuiRpPrimitiveType::type, object, field, enumItem, weakAssignment, cppFieldName);
		case GuiRemoteProtocolFields::StructDecl_type:
			return vl::glr::AssemblerSetEnumField(&vl::presentation::remoteprotocol::GuiRpStructDecl::type, object, field, enumItem, weakAssignment, cppFieldName);
		default:
			return vl::glr::AssemblyThrowFieldNotEnum(field, cppFieldName);
		}
	}

	const wchar_t* GuiRemoteProtocolTypeName(GuiRemoteProtocolClasses type)
	{
		const wchar_t* results[] = {
			L"ArrayMapType",
			L"ArrayType",
			L"Attribute",
			L"Declaration",
			L"EnumDecl",
			L"EnumMember",
			L"EventDecl",
			L"EventRequest",
			L"MessageDecl",
			L"MessageRequest",
			L"MessageResponse",
			L"OptionalType",
			L"PrimitiveType",
			L"ReferenceType",
			L"Schema",
			L"StructDecl",
			L"StructMember",
			L"Type",
			L"UnionDecl",
			L"UnionMember",
		};
		vl::vint index = (vl::vint)type;
		return 0 <= index && index < 20 ? results[index] : nullptr;
	}

	const wchar_t* GuiRemoteProtocolCppTypeName(GuiRemoteProtocolClasses type)
	{
		const wchar_t* results[] = {
			L"vl::presentation::remoteprotocol::GuiRpArrayMapType",
			L"vl::presentation::remoteprotocol::GuiRpArrayType",
			L"vl::presentation::remoteprotocol::GuiRpAttribute",
			L"vl::presentation::remoteprotocol::GuiRpDeclaration",
			L"vl::presentation::remoteprotocol::GuiRpEnumDecl",
			L"vl::presentation::remoteprotocol::GuiRpEnumMember",
			L"vl::presentation::remoteprotocol::GuiRpEventDecl",
			L"vl::presentation::remoteprotocol::GuiRpEventRequest",
			L"vl::presentation::remoteprotocol::GuiRpMessageDecl",
			L"vl::presentation::remoteprotocol::GuiRpMessageRequest",
			L"vl::presentation::remoteprotocol::GuiRpMessageResponse",
			L"vl::presentation::remoteprotocol::GuiRpOptionalType",
			L"vl::presentation::remoteprotocol::GuiRpPrimitiveType",
			L"vl::presentation::remoteprotocol::GuiRpReferenceType",
			L"vl::presentation::remoteprotocol::GuiRpSchema",
			L"vl::presentation::remoteprotocol::GuiRpStructDecl",
			L"vl::presentation::remoteprotocol::GuiRpStructMember",
			L"vl::presentation::remoteprotocol::GuiRpType",
			L"vl::presentation::remoteprotocol::GuiRpUnionDecl",
			L"vl::presentation::remoteprotocol::GuiRpUnionMember",
		};
		vl::vint index = (vl::vint)type;
		return 0 <= index && index < 20 ? results[index] : nullptr;
	}

	const wchar_t* GuiRemoteProtocolFieldName(GuiRemoteProtocolFields field)
	{
		const wchar_t* results[] = {
			L"ArrayMapType::element",
			L"ArrayMapType::keyField",
			L"ArrayType::element",
			L"Attribute::cppType",
			L"Attribute::name",
			L"Declaration::attributes",
			L"Declaration::name",
			L"EnumDecl::members",
			L"EnumMember::name",
			L"EventDecl::request",
			L"EventRequest::type",
			L"MessageDecl::request",
			L"MessageDecl::response",
			L"MessageRequest::type",
			L"MessageResponse::type",
			L"OptionalType::element",
			L"PrimitiveType::type",
			L"ReferenceType::name",
			L"Schema::declarations",
			L"StructDecl::members",
			L"StructDecl::type",
			L"StructMember::name",
			L"StructMember::type",
			L"UnionDecl::members",
			L"UnionMember::name",
		};
		vl::vint index = (vl::vint)field;
		return 0 <= index && index < 25 ? results[index] : nullptr;
	}

	const wchar_t* GuiRemoteProtocolCppFieldName(GuiRemoteProtocolFields field)
	{
		const wchar_t* results[] = {
			L"vl::presentation::remoteprotocol::GuiRpArrayMapType::element",
			L"vl::presentation::remoteprotocol::GuiRpArrayMapType::keyField",
			L"vl::presentation::remoteprotocol::GuiRpArrayType::element",
			L"vl::presentation::remoteprotocol::GuiRpAttribute::cppType",
			L"vl::presentation::remoteprotocol::GuiRpAttribute::name",
			L"vl::presentation::remoteprotocol::GuiRpDeclaration::attributes",
			L"vl::presentation::remoteprotocol::GuiRpDeclaration::name",
			L"vl::presentation::remoteprotocol::GuiRpEnumDecl::members",
			L"vl::presentation::remoteprotocol::GuiRpEnumMember::name",
			L"vl::presentation::remoteprotocol::GuiRpEventDecl::request",
			L"vl::presentation::remoteprotocol::GuiRpEventRequest::type",
			L"vl::presentation::remoteprotocol::GuiRpMessageDecl::request",
			L"vl::presentation::remoteprotocol::GuiRpMessageDecl::response",
			L"vl::presentation::remoteprotocol::GuiRpMessageRequest::type",
			L"vl::presentation::remoteprotocol::GuiRpMessageResponse::type",
			L"vl::presentation::remoteprotocol::GuiRpOptionalType::element",
			L"vl::presentation::remoteprotocol::GuiRpPrimitiveType::type",
			L"vl::presentation::remoteprotocol::GuiRpReferenceType::name",
			L"vl::presentation::remoteprotocol::GuiRpSchema::declarations",
			L"vl::presentation::remoteprotocol::GuiRpStructDecl::members",
			L"vl::presentation::remoteprotocol::GuiRpStructDecl::type",
			L"vl::presentation::remoteprotocol::GuiRpStructMember::name",
			L"vl::presentation::remoteprotocol::GuiRpStructMember::type",
			L"vl::presentation::remoteprotocol::GuiRpUnionDecl::members",
			L"vl::presentation::remoteprotocol::GuiRpUnionMember::name",
		};
		vl::vint index = (vl::vint)field;
		return 0 <= index && index < 25 ? results[index] : nullptr;
	}

	vl::Ptr<vl::glr::ParsingAstBase> GuiRemoteProtocolAstInsReceiver::ResolveAmbiguity(vl::vint32_t type, vl::collections::Array<vl::Ptr<vl::glr::ParsingAstBase>>& candidates)
	{
		auto cppTypeName = GuiRemoteProtocolCppTypeName((GuiRemoteProtocolClasses)type);
		return vl::glr::AssemblyThrowTypeNotAllowAmbiguity(type, cppTypeName);
	}
}
