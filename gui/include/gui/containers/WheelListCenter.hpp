#ifndef WHEELLISTCENTER_HPP
#define WHEELLISTCENTER_HPP

#include <gui_generated/containers/WheelListCenterBase.hpp>

class WheelListCenter : public WheelListCenterBase
{
public:
    WheelListCenter();
    virtual ~WheelListCenter() {}

    virtual void initialize();

    void SetIcon(Bitmap id);
protected:
};

#endif // WHEELLISTCENTER_HPP
