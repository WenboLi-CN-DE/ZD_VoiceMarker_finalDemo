#include <gui/screen2_screen/Screen2View.hpp>
#include "main.h"
#include "debug.h"

extern uint8_t flag;

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::displayCPU(char* Info)
{
	//The only variable that needs to be changed is the textArea buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea1Buffer, 50, "%s" ,buffer_Unicode);
		textArea1.resizeToCurrentText();
	// release
		textArea1.invalidateContent();
		box1.invalidate();
}
void Screen2View::displayDisk(char* Info)
{
	//The only variable that needs to be changed is the textArea buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea2Buffer, 50, "%s" ,buffer_Unicode);
		textArea2.resizeToCurrentText();
	// release
		textArea2.invalidateContent();
		box1.invalidate();
}

void Screen2View::displayDiskLoad(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea3Buffer, 50, "%s" ,buffer_Unicode);
		textArea3.resizeToCurrentText();
	// release
		textArea3.invalidateContent();
		box1.invalidate();
}

void Screen2View::displayMem(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea4Buffer, 50, "%s" ,buffer_Unicode);
		textArea4.resizeToCurrentText();
	// release
		textArea4.invalidateContent();
		box1.invalidate();
}

void Screen2View::displayTime(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea5Buffer, 50, "%s" ,buffer_Unicode);
		textArea5.resizeToCurrentText();
	// release
		textArea5.invalidateContent();
		box1.invalidate();
}

void Screen2View::displayZone(char* Info)
{
	//The only variable that needs to be changed is the text buffer(e.g. textArea1Buffer, textArea1)
		char buffer[50] ;
	// Convert const char to Unicode
		sprintf(buffer,"%s",Info);
		Unicode::UnicodeChar buffer_Unicode[50];
		Unicode::strncpy(buffer_Unicode, buffer, 50);	
	// Print the information to the screen
    Unicode::snprintf(textArea6Buffer, 50, "%s" ,buffer_Unicode);
		textArea6.resizeToCurrentText();
	// release
		textArea6.invalidateContent();
		box1.invalidate();
}

void Screen2View::functionSetHttpFlag()
{

}


void Screen2View::functionHttpGet()
{
 flag = 1;
}


void Screen2View::functionHttpPost()
{
 flag = 2;
}

void Screen2View::functionTftpGet()
{
 flag = 3;
}

void Screen2View::functionTftpPut()
{
 flag = 4;
}
void Screen2View::functionFtpGet()
{
 flag = 5;
}

void Screen2View::functionFtpPut()
{
 flag = 6;
}
