#ifndef MARKERHISTORYPRESENTER_HPP
#define MARKERHISTORYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MarkerHistoryView;

class MarkerHistoryPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MarkerHistoryPresenter(MarkerHistoryView& v);

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

    virtual ~MarkerHistoryPresenter() {};

private:
    MarkerHistoryPresenter();

    MarkerHistoryView& view;
};

#endif // MARKERHISTORYPRESENTER_HPP
