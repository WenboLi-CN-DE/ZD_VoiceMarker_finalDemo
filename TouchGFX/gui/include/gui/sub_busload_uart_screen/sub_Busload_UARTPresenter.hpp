#ifndef SUB_BUSLOAD_UARTPRESENTER_HPP
#define SUB_BUSLOAD_UARTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sub_Busload_UARTView;

class sub_Busload_UARTPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sub_Busload_UARTPresenter(sub_Busload_UARTView& v);

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

    virtual ~sub_Busload_UARTPresenter() {};

private:
    sub_Busload_UARTPresenter();

    sub_Busload_UARTView& view;
};

#endif // SUB_BUSLOAD_UARTPRESENTER_HPP
