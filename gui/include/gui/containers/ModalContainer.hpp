#ifndef MODALCONTAINER_HPP
#define MODALCONTAINER_HPP

#include <gui_generated/containers/ModalContainerBase.hpp>

class ModalContainer : public ModalContainerBase
{
public:
    ModalContainer();
    virtual ~ModalContainer() {}

    virtual void initialize();

    virtual void CloseButtonPressed();
    virtual void handleKeyEvent(uint8_t key);
protected:
};

#endif // MODALCONTAINER_HPP
