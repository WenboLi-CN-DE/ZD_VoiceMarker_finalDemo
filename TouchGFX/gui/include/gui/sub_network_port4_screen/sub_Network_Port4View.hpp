#ifndef SUB_NETWORK_PORT4VIEW_HPP
#define SUB_NETWORK_PORT4VIEW_HPP

#include <gui_generated/sub_network_port4_screen/sub_Network_Port4ViewBase.hpp>
#include <gui/sub_network_port4_screen/sub_Network_Port4Presenter.hpp>

class sub_Network_Port4View : public sub_Network_Port4ViewBase
{
public:
    sub_Network_Port4View();
    virtual ~sub_Network_Port4View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_NETWORK_PORT4VIEW_HPP
