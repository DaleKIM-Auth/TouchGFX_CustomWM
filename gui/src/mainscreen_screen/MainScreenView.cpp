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
    wheelListContainer.LeftMoveItem();
}

void MainScreenView::CenterSelectHandler()
{ 
    modalContainer.setVisible(true);
    modalContainer.invalidate();
}

void MainScreenView::MoveRightHandler()
{
    wheelListContainer.RightMoveItem();
}