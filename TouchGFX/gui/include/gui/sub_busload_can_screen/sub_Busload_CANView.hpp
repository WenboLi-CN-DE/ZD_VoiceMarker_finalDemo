#ifndef SUB_BUSLOAD_CANVIEW_HPP
#define SUB_BUSLOAD_CANVIEW_HPP

#include <gui_generated/sub_busload_can_screen/sub_Busload_CANViewBase.hpp>
#include <gui/sub_busload_can_screen/sub_Busload_CANPresenter.hpp>

class sub_Busload_CANView : public sub_Busload_CANViewBase
{
public:
    sub_Busload_CANView();
    virtual ~sub_Busload_CANView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_BUSLOAD_CANVIEW_HPP
