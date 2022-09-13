#ifndef SUB_NETWORK_WLANVIEW_HPP
#define SUB_NETWORK_WLANVIEW_HPP

#include <gui_generated/sub_network_wlan_screen/sub_Network_WLANViewBase.hpp>
#include <gui/sub_network_wlan_screen/sub_Network_WLANPresenter.hpp>

class sub_Network_WLANView : public sub_Network_WLANViewBase
{
public:
    sub_Network_WLANView();
    virtual ~sub_Network_WLANView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_NETWORK_WLANVIEW_HPP
