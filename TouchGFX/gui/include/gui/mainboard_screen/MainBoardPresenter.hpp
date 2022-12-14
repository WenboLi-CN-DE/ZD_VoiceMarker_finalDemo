#ifndef MAINBOARDPRESENTER_HPP
#define MAINBOARDPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MainBoardView;

class MainBoardPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MainBoardPresenter(MainBoardView& v);

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

    virtual ~MainBoardPresenter() {};
		virtual void triggerInfoChanged();
private:
    MainBoardPresenter();


    MainBoardView& view;
};

#endif // MAINBOARDPRESENTER_HPP
