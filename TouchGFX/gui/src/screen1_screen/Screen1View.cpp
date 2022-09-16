#include <gui/screen1_screen/Screen1View.hpp>
#include "main.h"
#include "waveplayer.h"
#include "waverecorder.h" 

extern AUDIO_DEMO_StateMachine     AudioDemo;
extern uint32_t elapsed_time;
extern int FileSize_Recorder;
extern uint32_t uwVolume_tmp;
extern uint8_t RecordFlag; 
Screen1View::Screen1View()
{
	number = 0;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleTickEvent()
{
		Unicode::snprintf(textArea6Buffer1, 10 , "%d" , (int)(elapsed_time/60));
		Unicode::snprintf(textArea6Buffer2, 10 , "%d" , (int)(elapsed_time%60));
		textArea6.resizeToCurrentText();
		Unicode::snprintf(textArea10Buffer, 20 , "%d" , FileSize_Recorder);
		textArea10.resizeToCurrentText();
		textArea10.invalidate();
	
		Unicode::snprintf(textArea7Buffer, 10 , "%d" , (int)DEFAULT_AUDIO_IN_FREQ );
		textArea7.resizeToCurrentText();
		textArea7.invalidate();
	
		box1.invalidate();//Tell the framework that this entire Drawable needs to be redrawn.

}	

void Screen1View::function1()
{
		AudioState = AUDIO_STATE_RECORD;
}



void Screen1View::functionPlay()
{
	AudioDemo.state = AUDIO_DEMO_PLAYBACK;

}

void Screen1View::functionPause()
{
	AudioState = AUDIO_STATE_PAUSE;
}

void Screen1View::functionRecordStart()// the first refresh
{	
	AudioDemo.state = AUDIO_DEMO_IN;
	BSP_LED_Toggle(LED2);
	RecordFlag = 1;
}

void Screen1View::functionStop()
{
	AudioState = AUDIO_STATE_STOP;
}



void Screen1View::functionVolume(int value)
{
	uwVolume_tmp = value;
	BSP_AUDIO_OUT_SetVolume(uwVolume_tmp);
	Unicode::snprintf(textAreaVolumeBuffer, 10 , "%d" , value);
	textAreaVolume.resizeToCurrentText();
	textAreaVolume.invalidate();
}

