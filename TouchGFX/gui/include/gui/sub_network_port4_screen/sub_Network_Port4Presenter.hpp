#ifndef SUB_NETWORK_PORT4PRESENTER_HPP
#define SUB_NETWORK_PORT4PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sub_Network_Port4View;

class sub_Network_Port4Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    sub_Network_Port4Presenter(sub_Network_Port4View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~sub_Network_Port4Presenter() {};

private:
    sub_Network_Port4Presenter();

    sub_Network_Port4View& view;
};

#endif // SUB_NETWORK_PORT4PRESENTER_HPP
