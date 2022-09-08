#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>



class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
		virtual void  handleTickEvent();	
		virtual void  functionVolume(int value);
protected:
		virtual void  function1();
		virtual void  functionPlay();
		virtual void  functionPause();
		virtual void  functionStop();
		virtual void  functionRecordStart();
 		int number, count, minute;
};

#endif // SCREEN1VIEW_HPP
