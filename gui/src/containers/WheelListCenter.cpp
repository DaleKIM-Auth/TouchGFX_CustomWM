#include <gui/containers/WheelListCenter.hpp>

WheelListCenter::WheelListCenter()
{

}

void WheelListCenter::initialize()
{
    WheelListCenterBase::initialize();
}

void WheelListCenter::SetIcon(Bitmap id)
{
    ItemSTM32.setBitmap(id);
    ItemSTM32.invalidate();
}