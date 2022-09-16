#include <gui/mainboard_screen/MainBoardView.hpp>
#include <gui/mainboard_screen/MainBoardPresenter.hpp>

MainBoardPresenter::MainBoardPresenter(MainBoardView& v)
    : view(v)
{

}

void MainBoardPresenter::activate()
{

}

void MainBoardPresenter::deactivate()
{

}

void MainBoardPresenter::triggerInfoChanged()
{
	view.displayTrigger(model->getTriggerValue());
}


