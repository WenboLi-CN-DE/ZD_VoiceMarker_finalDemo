#ifndef SUB_BUSLOAD_LINVIEW_HPP
#define SUB_BUSLOAD_LINVIEW_HPP

#include <gui_generated/sub_busload_lin_screen/sub_Busload_LINViewBase.hpp>
#include <gui/sub_busload_lin_screen/sub_Busload_LINPresenter.hpp>

class sub_Busload_LINView : public sub_Busload_LINViewBase
{
public:
    sub_Busload_LINView();
    virtual ~sub_Busload_LINView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_BUSLOAD_LINVIEW_HPP
