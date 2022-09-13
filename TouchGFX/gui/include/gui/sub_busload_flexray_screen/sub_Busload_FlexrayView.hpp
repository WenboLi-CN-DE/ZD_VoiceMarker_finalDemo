#ifndef SUB_BUSLOAD_FLEXRAYVIEW_HPP
#define SUB_BUSLOAD_FLEXRAYVIEW_HPP

#include <gui_generated/sub_busload_flexray_screen/sub_Busload_FlexrayViewBase.hpp>
#include <gui/sub_busload_flexray_screen/sub_Busload_FlexrayPresenter.hpp>

class sub_Busload_FlexrayView : public sub_Busload_FlexrayViewBase
{
public:
    sub_Busload_FlexrayView();
    virtual ~sub_Busload_FlexrayView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_BUSLOAD_FLEXRAYVIEW_HPP
