#include <gui/mainboard_screen/MainBoardView.hpp>
#include "main.h"

extern char triggerbuffer[20];

MainBoardView::MainBoardView()
{

}

void MainBoardView::setupScreen()
{
    MainBoardViewBase::setupScreen();
}

void MainBoardView::tearDownScreen()
{
    MainBoardViewBase::tearDownScreen();
}

void MainBoardView::handleTickEvent()
{
	//The only variable that needs to be changed is the textArea buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",triggerbuffer);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textTriggerInfoBuffer, 50, "%s" ,buffer_Unicode);
		textTriggerInfo.resizeToCurrentText();
	// release
		textTriggerInfo.invalidateContent();
		box1.invalidate();
}	
