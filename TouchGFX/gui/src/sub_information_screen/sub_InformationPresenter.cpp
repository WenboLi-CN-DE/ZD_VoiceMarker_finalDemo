#include <gui/sub_information_screen/sub_InformationView.hpp>
#include <gui/sub_information_screen/sub_InformationPresenter.hpp>

sub_InformationPresenter::sub_InformationPresenter(sub_InformationView& v)
    : view(v)
{

}

void sub_InformationPresenter::activate()
{

}

void sub_InformationPresenter::deactivate()
{

}

void sub_InformationPresenter::cpuChanged()
{
    view.displayCPU(model->getCPUValue());
}

void sub_InformationPresenter::diskChanged()
{
    view.displayDisk(model->getDiskValue());
}

void sub_InformationPresenter::diskLoadChanged()
{
    view.displayDiskLoad(model->getDiskLoadValue());
}

void sub_InformationPresenter::memChanged()
{
    view.displayMem(model->getMemValue());
}

void sub_InformationPresenter::timeChanged()
{
    view.displayTime(model->getTimeValue());
}

void sub_InformationPresenter::zoneChanged()
{
    view.displayZone(model->getZoneValue());
}