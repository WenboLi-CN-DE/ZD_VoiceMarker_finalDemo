#ifndef SUB_INFORMATIONPRESENTER_HPP
#define SUB_INFORMATIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sub_InformationView;

class sub_InformationPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sub_InformationPresenter(sub_InformationView& v);

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

    virtual ~sub_InformationPresenter() {};
						//from model
		virtual void cpuChanged();
		virtual void diskChanged();
    virtual void diskLoadChanged();
		virtual void memChanged();
		virtual void timeChanged();
		virtual void zoneChanged();

private:
    sub_InformationPresenter();

    sub_InformationView& view;
};

#endif // SUB_INFORMATIONPRESENTER_HPP
