#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{
//	view.displayAge(model->getAgeValue());
}

void Screen2Presenter::deactivate()
{

}

void Screen2Presenter::cpuChanged()
{
    view.displayCPU(model->getCPUValue());
}

void Screen2Presenter::diskChanged()
{
    view.displayDisk(model->getDiskValue());
}

void Screen2Presenter::diskLoadChanged()
{
    view.displayDiskLoad(model->getDiskLoadValue());
}

void Screen2Presenter::memChanged()
{
    view.displayMem(model->getMemValue());
}

void Screen2Presenter::timeChanged()
{
    view.displayTime(model->getTimeValue());
}

void Screen2Presenter::zoneChanged()
{
    view.displayZone(model->getZoneValue());
}

