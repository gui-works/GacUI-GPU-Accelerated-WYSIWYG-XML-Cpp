#include "TestControls_List.h"
using namespace gacui_unittest_template;

TEST_FILE
{
	/***********************************************************************
	Shared
	***********************************************************************/

	const WString fragmentLoadImages = LR"GacUISrc(
        var largeImages : GuiImageData^[] = null;
        var smallImages : GuiImageData^[] = null;
        func EnsureImages() : void
        {
          if (largeImages is not null)
          {
            return;
          }
          largeImages = {
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/LargeImages/Cert", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/LargeImages/Data", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/LargeImages/Link", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/LargeImages/Folder", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/LargeImages/Light", true));
          };
          smallImages = {
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/SmallImages/Cert", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/SmallImages/Data", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/SmallImages/Link", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/SmallImages/Folder", true));
            (cast (GuiImageData^) self.ResolveResource("res", "ListViewImages/SmallImages/Light", true));
          };
        }
        func GetLargeImage(index:int) : GuiImageData^
        {
          EnsureImages();
          return largeImages[index];
        }
        func GetSmallImage(index:int) : GuiImageData^
        {
          EnsureImages();
          return smallImages[index];
        }
)GacUISrc";

	const WString fragmentNotLoadImages = LR"GacUISrc(
        func GetLargeImage(index:int) : GuiImageData^
        {
          return null;
        }
        func GetSmallImage(index:int) : GuiImageData^
        {
          return null;
        }
)GacUISrc";

	const WString fragmentListViewData = LR"GacUISrc(
  <Script name="ListViewDataResource"><Workflow><![CDATA[
    module treeviewdata;
    using system::*;
    using presentation::*;

    class ListViewData
    {
      prop Id:string = "" {not observe}
      prop First:string = "" {not observe}
      prop Second:string = "" {not observe}
      prop Third:string = "" {not observe}
      prop Fourth:string = "" {not observe}
      prop LargeImage:GuiImageData^ = null {not observe}
      prop SmallImage:GuiImageData^ = null {not observe}
    }
  ]]></Workflow></Script>
)GacUISrc";

	/***********************************************************************
	GuiListView
	***********************************************************************/
	{
		const WString fragmentMembers = LR"GacUISrc(
        func InitializeItems(count:int) : void
        {
          for (item in range[1, count])
          {
            var listViewItem = new ListViewItem^();
            listViewItem.Text = $"Item $(item)";
            listViewItem.SubItems.Add($"1st:$(item * 1)");
            listViewItem.SubItems.Add($"2nd:$(item * 2)");
            listViewItem.SubItems.Add($"3rd:$(item * 3)");
            listViewItem.SubItems.Add($"4th:$(item * 4)");
            listViewItem.LargeImage = GetLargeImage((item - 1) % 5);
            listViewItem.SmallImage = GetSmallImage((item - 1) % 5);
            list.Items.Add(listViewItem);
          }
        }
)GacUISrc";

		const WString fragmentWindow = LR"GacUISrc(
      <Window ref.Name="self" Text-format="GuiListView [$(list.SelectedItemIndex)] -&gt; [$(list.SelectedItemText)]" ClientSize="x:640 y:480">
        <ListView ref.Name="list" HorizontalAlwaysVisible="false" VerticalAlwaysVisible="false">
          <att.BoundsComposition-set PreferredMinSize="x:400 y:300" AlignmentToParent="left:0 top:5 right:0 bottom:0"/>
          <att.Columns>
            <_ Text="Id"/>
            <_ Size="100" Text="First"/>
            <_ Size="100" Text="Second"/>
            <_ Size="100" Text="Third"/>
            <_ Size="100" Text="Fourth"/>
          </att.Columns>
          <att.DataColumns>
            <_>0</_>
            <_>2</_>
            <_>3</_>
          </att.DataColumns>
        </ListView>
      </Window>
)GacUISrc";

		const WString resourceWithImage = LR"GacUISrc(
<Resource>
  <Folder name="UnitTestConfig" content="Link">ListViewImagesData.xml</Folder>
  <Folder name="ListViewImages" content="Link">ListViewImagesFolder.xml</Folder>
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <ref.Members><![CDATA[)GacUISrc" + fragmentLoadImages + fragmentMembers + LR"GacUISrc(
      ]]></ref.Members>)GacUISrc" + fragmentWindow + LR"GacUISrc(
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

		const WString resourceWithoutImage = LR"GacUISrc(
<Resource>
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <ref.Members><![CDATA[)GacUISrc" + fragmentNotLoadImages + fragmentMembers + LR"GacUISrc(
      ]]></ref.Members>)GacUISrc" + fragmentWindow + LR"GacUISrc(
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

		auto getItems = [](GuiWindow* window)
		{
			auto listControl = FindObjectByName<GuiTextList>(window, L"list");
			return UnboxValue<Ptr<IValueList>>(BoxParameter(listControl->GetItems()));
		};

		auto notifyItemDataModified = [](auto&&...) {};

		TEST_CATEGORY(L"GuiListView")
		{
			GuiVirtualListView_ViewAndImages_TestCases(
				resourceWithImage,
				WString::Unmanaged(L"GuiListView"));

			GuiVirtualListView_TestCases(
				resourceWithoutImage,
				WString::Unmanaged(L"GuiListView"),
				getItems,
				notifyItemDataModified);
		});
	}

	/***********************************************************************
	GuiBindableListView
	***********************************************************************/
	{
		const WString fragmentMembers = LR"GacUISrc(
        var items:observe ListViewData^[] = {};
        func InitializeItems(count:int) : void
        {
          for (item in range[1, count])
          {
            var listViewItem = new ListViewData^();
            listViewItem.Id = $"Item $(item)";
            listViewItem.First = $"1st:$(item * 1)";
            listViewItem.Second = $"2nd:$(item * 2)";
            listViewItem.Third = $"3rd:$(item * 3)";
            listViewItem.Fourth = $"4th:$(item * 4)";
            listViewItem.LargeImage = GetLargeImage((item - 1) % 5);
            listViewItem.SmallImage = GetSmallImage((item - 1) % 5);
            items.Add(listViewItem);
          }
        }
)GacUISrc";

		const WString fragmentWindow = LR"GacUISrc(
      <Window ref.Name="self" Text-format="GuiListView [$(list.SelectedItemIndex)] -&gt; [$(list.SelectedItemText)]" ClientSize="x:640 y:480">
        <BindableListView ref.Name="list" env.ItemType="ListViewData^" HorizontalAlwaysVisible="false" VerticalAlwaysVisible="false">
          <att.BoundsComposition-set PreferredMinSize="x:400 y:300" AlignmentToParent="left:0 top:5 right:0 bottom:0"/>
          <att.ItemSource-eval>self.items</ItemSource-eval>
          <att.LargeImageProperty>LargeImage</att.LargeImageProperty>
          <att.SmallImageProperty>SmallImage</att.SmallImageProperty>
          <att.Columns>
            <_ Text="Id" TextProperty="Id"/>
            <_ Size="100" Text="First" TextProperty="First"/>
            <_ Size="100" Text="Second" TextProperty="Second"/>
            <_ Size="100" Text="Third" TextProperty="Third"/>
            <_ Size="100" Text="Fourth" TextProperty="Fourth"/>
          </att.Columns>
          <att.DataColumns>
            <_>0</_>
            <_>2</_>
            <_>3</_>
          </att.DataColumns>
        </BindableListView>
      </Window>
)GacUISrc";

		const WString resourceWithImage = LR"GacUISrc(
<Resource>)GacUISrc" + fragmentListViewData + LR"GacUISrc(
  <Folder name="UnitTestConfig" content="Link">ListViewImagesData.xml</Folder>
  <Folder name="ListViewImages" content="Link">ListViewImagesFolder.xml</Folder>
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <ref.Members><![CDATA[)GacUISrc" + fragmentLoadImages + fragmentMembers + LR"GacUISrc(
      ]]></ref.Members>)GacUISrc" + fragmentWindow + LR"GacUISrc(
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

		const WString resourceWithoutImage = LR"GacUISrc(
<Resource>)GacUISrc" + fragmentListViewData + LR"GacUISrc(
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <ref.Members><![CDATA[)GacUISrc" + fragmentNotLoadImages + fragmentMembers + LR"GacUISrc(
      ]]></ref.Members>)GacUISrc" + fragmentWindow + LR"GacUISrc(
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

		TEST_CATEGORY(L"GuiBindableListView")
		{
			GuiVirtualListView_ViewAndImages_TestCases(
				resourceWithImage,
				WString::Unmanaged(L"GuiBindableListView"));
		});
	}
}