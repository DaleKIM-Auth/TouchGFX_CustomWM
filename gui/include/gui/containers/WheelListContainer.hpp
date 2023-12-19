#ifndef WHEELLISTCONTAINER_HPP
#define WHEELLISTCONTAINER_HPP

#include <gui_generated/containers/WheelListContainerBase.hpp>

class WheelListContainer : public WheelListContainerBase
{
public:
    WheelListContainer();
    virtual ~WheelListContainer() {}

    virtual void initialize();

    virtual void scrollWheelUpdateItem(WheelListItem& item, int16_t itemIndex);
    virtual void scrollWheelUpdateCenterItem(WheelListCenter& item, int16_t itemIndex);
    virtual void OpenSTM32Details();

    void RightMoveItem(void);
    void LeftMoveItem(void);
    void CenterSelected(void);
protected:
};

#endif // WHEELLISTCONTAINER_HPP
