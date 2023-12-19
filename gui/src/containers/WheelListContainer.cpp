#include <gui/containers/WheelListContainer.hpp>
#include <images/BitmapDatabase.hpp>
#include <touchgfx/Utils.hpp>

WheelListContainer::WheelListContainer()
{

}

void WheelListContainer::initialize()
{
    WheelListContainerBase::initialize();
}

void WheelListContainer::scrollWheelUpdateItem(WheelListItem& Item, int16_t ItemIndex)
{
    switch (ItemIndex) {
    case 0:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF0_SMALL_ID));
        break;
    case 1:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF1_SMALL_ID));
        break;
    case 2:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF2_SMALL_ID));
        break;
    case 3:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF3_SMALL_ID));
        break;
    case 4:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF4_SMALL_ID));
        break;
    case 5:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF7_SMALL_ID));
        break;
    case 6:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEG0_SMALL_ID));
        break;
    case 7:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEH7_SMALL_ID));
        break;
    case 8:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL0_SMALL_ID));
        break;
    case 9:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL1_SMALL_ID));
        break;
    case 10:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL4_SMALL_ID));
        break;
    case 11:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEMP1_SMALL_ID));
        break;
    case 12:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEWB_SMALL_ID));
        break;
    case 13:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEWL_SMALL_ID));
        break;
    default:
        break;
    }
}

void WheelListContainer::scrollWheelUpdateCenterItem(WheelListCenter& Item, int16_t ItemIndex)
{
    switch (ItemIndex) {
    case 0:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF0_ID));
        break;
    case 1:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF1_ID));
        break;
    case 2:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF2_ID));
        break;
    case 3:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF3_ID));
        break;
    case 4:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF4_ID));
        break;
    case 5:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEF7_ID));
        break;
    case 6:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEG0_ID));
        break;
    case 7:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEH7_ID));
        break;
    case 8:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL0_ID));
        break;
    case 9:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL1_ID));
        break;
    case 10:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEL4_ID));
        break;
    case 11:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEMP1_ID));
        break;
    case 12:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEWB_ID));
        break;
    case 13:
        Item.SetIcon(touchgfx::Bitmap(BITMAP_LABEL_STM32CUBEWL_ID));
        break;
    default:
        break;
    }
}

void WheelListContainer::OpenSTM32Details()
{
    touchgfx_printf("Button Clicked\n");
}

void WheelListContainer::RightMoveItem()
{
    if(!scrollWheel.isAnimating())
    {
        int item = scrollWheel.getSelectedItem();
        scrollWheel.animateToItem(item + 1, 15);
    }
}

void WheelListContainer::LeftMoveItem()
{
    if (!scrollWheel.isAnimating())
    {
        int item = scrollWheel.getSelectedItem();
        scrollWheel.animateToItem(item - 1, 15);        
    }
}

void WheelListContainer::CenterSelected()
{

}