#ifndef SUB_NETWORK_PORT2VIEW_HPP
#define SUB_NETWORK_PORT2VIEW_HPP

#include <gui_generated/sub_network_port2_screen/sub_Network_Port2ViewBase.hpp>
#include <gui/sub_network_port2_screen/sub_Network_Port2Presenter.hpp>

class sub_Network_Port2View : public sub_Network_Port2ViewBase
{
public:
    sub_Network_Port2View();
    virtual ~sub_Network_Port2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_NETWORK_PORT2VIEW_HPP
