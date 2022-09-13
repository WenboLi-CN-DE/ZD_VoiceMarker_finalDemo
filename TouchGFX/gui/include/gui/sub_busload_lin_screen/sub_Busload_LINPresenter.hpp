#ifndef SUB_BUSLOAD_LINPRESENTER_HPP
#define SUB_BUSLOAD_LINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sub_Busload_LINView;

class sub_Busload_LINPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sub_Busload_LINPresenter(sub_Busload_LINView& v);

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

    virtual ~sub_Busload_LINPresenter() {};

private:
    sub_Busload_LINPresenter();

    sub_Busload_LINView& view;
};

#endif // SUB_BUSLOAD_LINPRESENTER_HPP
