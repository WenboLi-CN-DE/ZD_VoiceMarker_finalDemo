#include <gui/sub_information_screen/sub_InformationView.hpp>
#include "main.h"
#include "debug.h"

sub_InformationView::sub_InformationView()
{

}

void sub_InformationView::setupScreen()
{
    sub_InformationViewBase::setupScreen();
}

void sub_InformationView::tearDownScreen()
{
    sub_InformationViewBase::tearDownScreen();
}

void sub_InformationView::displayCPU(char* Info)
{
	//The only variable that needs to be changed is the textArea buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textCPUBuffer, 50, "%s" ,buffer_Unicode);
		textCPU.resizeToCurrentText();
	// release
		textCPU.invalidateContent();
		box1.invalidate();
}
void sub_InformationView::displayDisk(char* Info)
{
	//The only variable that needs to be changed is the textArea buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textDiskBuffer, 50, "%s" ,buffer_Unicode);
		textDisk.resizeToCurrentText();
	// release
		textDisk.invalidateContent();
		box1.invalidate();
}

void sub_InformationView::displayDiskLoad(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textDiskloadBuffer, 50, "%s" ,buffer_Unicode);
		textDiskload.resizeToCurrentText();
	// release
		textDiskload.invalidateContent();
		box1.invalidate();
}

void sub_InformationView::displayMem(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textMemoryBuffer, 50, "%s" ,buffer_Unicode);
		textMemory.resizeToCurrentText();
	// release
		textMemory.invalidateContent();
		box1.invalidate();
}

void sub_InformationView::displayTime(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textTimeBuffer, 50, "%s" ,buffer_Unicode);
		textTime.resizeToCurrentText();
	// release
		textTime.invalidateContent();
		box1.invalidate();
}

void sub_InformationView::displayZone(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textZoneBuffer, 50, "%s" ,buffer_Unicode);
		textZone.resizeToCurrentText();
	// release
		textZone.invalidateContent();
		box1.invalidate();
}