#ifndef MARKERHISTORYVIEW_HPP
#define MARKERHISTORYVIEW_HPP

#include <gui_generated/markerhistory_screen/MarkerHistoryViewBase.hpp>
#include <gui/markerhistory_screen/MarkerHistoryPresenter.hpp>

class MarkerHistoryView : public MarkerHistoryViewBase
{
public:
    MarkerHistoryView();
    virtual ~MarkerHistoryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MARKERHISTORYVIEW_HPP
