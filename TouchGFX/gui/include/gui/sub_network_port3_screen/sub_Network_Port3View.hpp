#ifndef SUB_NETWORK_PORT3VIEW_HPP
#define SUB_NETWORK_PORT3VIEW_HPP

#include <gui_generated/sub_network_port3_screen/sub_Network_Port3ViewBase.hpp>
#include <gui/sub_network_port3_screen/sub_Network_Port3Presenter.hpp>

class sub_Network_Port3View : public sub_Network_Port3ViewBase
{
public:
    sub_Network_Port3View();
    virtual ~sub_Network_Port3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_NETWORK_PORT3VIEW_HPP
