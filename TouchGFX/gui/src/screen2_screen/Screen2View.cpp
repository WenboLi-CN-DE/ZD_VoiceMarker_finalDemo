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
