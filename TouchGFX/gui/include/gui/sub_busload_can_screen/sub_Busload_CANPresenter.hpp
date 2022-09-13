#ifndef SUB_BUSLOAD_CANPRESENTER_HPP
#define SUB_BUSLOAD_CANPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sub_Busload_CANView;

class sub_Busload_CANPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sub_Busload_CANPresenter(sub_Busload_CANView& v);

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

    virtual ~sub_Busload_CANPresenter() {};

private:
    sub_Busload_CANPresenter();

    sub_Busload_CANView& view;
};

#endif // SUB_BUSLOAD_CANPRESENTER_HPP
