#include <gui/containers/WheelListItem.hpp>

WheelListItem::WheelListItem()
{

}

void WheelListItem::initialize()
{
    WheelListItemBase::initialize();
}

void WheelListItem::SetIcon(Bitmap id)
{
    ItemSTM32.setBitmap(id);
    ItemSTM32.invalidate();
}