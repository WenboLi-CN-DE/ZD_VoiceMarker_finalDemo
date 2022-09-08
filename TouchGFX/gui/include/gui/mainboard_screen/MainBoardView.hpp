#ifndef MAINBOARDVIEW_HPP
#define MAINBOARDVIEW_HPP

#include <gui_generated/mainboard_screen/MainBoardViewBase.hpp>
#include <gui/mainboard_screen/MainBoardPresenter.hpp>

class MainBoardView : public MainBoardViewBase
{
public:
    MainBoardView();
    virtual ~MainBoardView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MAINBOARDVIEW_HPP
