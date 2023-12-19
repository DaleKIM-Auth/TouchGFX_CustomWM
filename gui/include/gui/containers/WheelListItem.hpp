#ifndef WHEELLISTITEM_HPP
#define WHEELLISTITEM_HPP

#include <gui_generated/containers/WheelListItemBase.hpp>

class WheelListItem : public WheelListItemBase
{
public:
    WheelListItem();
    virtual ~WheelListItem() {}

    virtual void initialize();

    void SetIcon(Bitmap id);
    
protected:
};

#endif // WHEELLISTITEM_HPP
