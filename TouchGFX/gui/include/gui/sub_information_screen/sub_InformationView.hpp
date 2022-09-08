#ifndef SUB_INFORMATIONVIEW_HPP
#define SUB_INFORMATIONVIEW_HPP

#include <gui_generated/sub_information_screen/sub_InformationViewBase.hpp>
#include <gui/sub_information_screen/sub_InformationPresenter.hpp>

class sub_InformationView : public sub_InformationViewBase
{
public:
    sub_InformationView();
    virtual ~sub_InformationView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_INFORMATIONVIEW_HPP
