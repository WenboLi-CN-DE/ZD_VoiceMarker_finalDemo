#ifndef SUB_NETWORK_PORT1VIEW_HPP
#define SUB_NETWORK_PORT1VIEW_HPP

#include <gui_generated/sub_network_port1_screen/sub_Network_Port1ViewBase.hpp>
#include <gui/sub_network_port1_screen/sub_Network_Port1Presenter.hpp>

class sub_Network_Port1View : public sub_Network_Port1ViewBase
{
public:
    sub_Network_Port1View();
    virtual ~sub_Network_Port1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_NETWORK_PORT1VIEW_HPP
