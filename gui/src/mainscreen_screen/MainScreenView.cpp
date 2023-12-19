#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::MoveLeftHandler()
{
    if (!modalContainer.isVisible()) {
        wheelListContainer.LeftMoveItem();
    }   
}

void MainScreenView::CenterSelectHandler()
{ 
    if (!modalContainer.isVisible()) {
        modalContainer.setVisible(true);
        modalContainer.invalidate();
    }
    else {
        modalContainer.setVisible(false);
        modalContainer.invalidate();
    }
}

void MainScreenView::MoveRightHandler()
{
    if (!modalContainer.isVisible()) {
        wheelListContainer.RightMoveItem();
    }
}