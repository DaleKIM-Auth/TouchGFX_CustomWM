#include <gui/containers/ModalContainer.hpp>

ModalContainer::ModalContainer()
{

}

void ModalContainer::initialize()
{
    ModalContainerBase::initialize();
}

void ModalContainer::CloseButtonPressed()
{
    modalWindow.setVisible(false);
    modalWindow.invalidate();
}

void ModalContainer::handleKeyEvent(uint8_t key)
{

}