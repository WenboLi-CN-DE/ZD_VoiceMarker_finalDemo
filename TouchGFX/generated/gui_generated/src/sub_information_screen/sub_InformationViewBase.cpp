/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sub_information_screen/sub_InformationViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

sub_InformationViewBase::sub_InformationViewBase() :
    buttonCallback(this, &sub_InformationViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_E_1156000_300B6C29_ID));
    image1.setAlpha(100);

    box1.setPosition(131, 48, 370, 371);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    box1.setAlpha(0);

    textZone.setXY(155, 368);
    textZone.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textZone.setLinespacing(0);
    Unicode::snprintf(textZoneBuffer, TEXTZONE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_FE4O).getText());
    textZone.setWildcard(textZoneBuffer);
    textZone.resizeToCurrentText();
    textZone.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S0L5));

    textTime.setXY(155, 316);
    textTime.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textTime.setLinespacing(0);
    Unicode::snprintf(textTimeBuffer, TEXTTIME_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_1GDG).getText());
    textTime.setWildcard(textTimeBuffer);
    textTime.resizeToCurrentText();
    textTime.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4OFT));

    textDiskload.setXY(155, 267);
    textDiskload.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textDiskload.setLinespacing(0);
    Unicode::snprintf(textDiskloadBuffer, TEXTDISKLOAD_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_3DWO).getText());
    textDiskload.setWildcard(textDiskloadBuffer);
    textDiskload.resizeToCurrentText();
    textDiskload.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P20E));

    textMemory.setXY(155, 210);
    textMemory.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textMemory.setLinespacing(0);
    Unicode::snprintf(textMemoryBuffer, TEXTMEMORY_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_PNE7).getText());
    textMemory.setWildcard(textMemoryBuffer);
    textMemory.resizeToCurrentText();
    textMemory.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4IO7));

    textDisk.setXY(155, 161);
    textDisk.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textDisk.setLinespacing(0);
    Unicode::snprintf(textDiskBuffer, TEXTDISK_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_95GO).getText());
    textDisk.setWildcard(textDiskBuffer);
    textDisk.resizeToCurrentText();
    textDisk.setTypedText(touchgfx::TypedText(T___SINGLEUSE_81KR));

    textCPU.setXY(155, 109);
    textCPU.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCPU.setLinespacing(0);
    Unicode::snprintf(textCPUBuffer, TEXTCPU_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_KPHE).getText());
    textCPU.setWildcard(textCPUBuffer);
    textCPU.resizeToCurrentText();
    textCPU.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YLT5));

    textSNNumber.setXY(155, 61);
    textSNNumber.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textSNNumber.setLinespacing(0);
    textSNNumberBuffer[0] = 0;
    textSNNumber.setWildcard(textSNNumberBuffer);
    textSNNumber.resizeToCurrentText();
    textSNNumber.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WCWV));

    Button_File_Main.setXY(0, 0);
    Button_File_Main.setBitmaps(touchgfx::Bitmap(BITMAP_IC_ACTION_ARROW_LEFT_LIGHT_ID), touchgfx::Bitmap(BITMAP_IC_ACTION_ARROW_LEFT_ID));
    Button_File_Main.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(box1);
    add(textZone);
    add(textTime);
    add(textDiskload);
    add(textMemory);
    add(textDisk);
    add(textCPU);
    add(textSNNumber);
    add(Button_File_Main);
}

void sub_InformationViewBase::setupScreen()
{

}

void sub_InformationViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Button_File_Main)
    {
        //Interaction1
        //When Button_File_Main clicked change screen to MainBoard
        //Go to MainBoard with no screen transition
        application().gotoMainBoardScreenNoTransition();
    }
}
