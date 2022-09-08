#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
		
		//from presenter
		void displayCPU(char* Info);
		void displayDisk(char* Info);
		void displayDiskLoad(char* Info);
		void displayMem(char* Info);
		void displayTime(char* Info);
		void displayZone(char* Info);
		virtual void functionSetHttpFlag();
		virtual void functionHttpGet();
		virtual void functionHttpPost();
		virtual void functionTftpGet();
		virtual void functionTftpPut();
		virtual void functionFtpGet();
		virtual void functionFtpPut();
protected:
};

#endif // SCREEN2VIEW_HPP
