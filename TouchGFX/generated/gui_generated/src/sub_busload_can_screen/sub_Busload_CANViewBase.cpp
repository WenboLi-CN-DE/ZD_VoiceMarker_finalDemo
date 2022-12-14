/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sub_busload_can_screen/sub_Busload_CANViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


sub_Busload_CANViewBase::sub_Busload_CANViewBase() :
    buttonCallback(this, &sub_Busload_CANViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &sub_Busload_CANViewBase::flexButtonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_E_1156000_300B6C29_ID));
    image1.setAlpha(101);

    containerCAN1.setPosition(119, 52, 80, 107);

    circleCAN1.setPosition(0, 0, 80, 80);
    circleCAN1.setCenter(40, 40);
    circleCAN1.setRadius(30);
    circleCAN1.setLineWidth(0);
    circleCAN1.setArc(0, 360);
    circleCAN1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN1.setPainter(circleCAN1Painter);
    containerCAN1.add(circleCAN1);

    ButtonCAN1.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN1.setBorderSize(5);
    ButtonCAN1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN1.setPosition(15, 15, 50, 50);
    ButtonCAN1.setAlpha(0);
    containerCAN1.add(ButtonCAN1);

    textCAN1.setXY(18, 84);
    textCAN1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN1.setLinespacing(0);
    textCAN1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_K4CL));
    containerCAN1.add(textCAN1);

    containerCAN2.setPosition(225, 52, 80, 107);

    circleCAN2.setPosition(0, 0, 80, 80);
    circleCAN2.setCenter(40, 40);
    circleCAN2.setRadius(30);
    circleCAN2.setLineWidth(0);
    circleCAN2.setArc(0, 360);
    circleCAN2Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN2.setPainter(circleCAN2Painter);
    containerCAN2.add(circleCAN2);

    ButtonCAN2.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN2.setBorderSize(5);
    ButtonCAN2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN2.setPosition(15, 15, 50, 50);
    ButtonCAN2.setAlpha(0);
    containerCAN2.add(ButtonCAN2);

    textCAN2.setXY(18, 84);
    textCAN2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN2.setLinespacing(0);
    textCAN2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YQB4));
    containerCAN2.add(textCAN2);

    containerCAN3.setPosition(320, 52, 80, 107);

    circleCAN3.setPosition(0, 0, 80, 80);
    circleCAN3.setCenter(40, 40);
    circleCAN3.setRadius(30);
    circleCAN3.setLineWidth(0);
    circleCAN3.setArc(0, 360);
    circleCAN3Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN3.setPainter(circleCAN3Painter);
    containerCAN3.add(circleCAN3);

    ButtonCAN3.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN3.setBorderSize(5);
    ButtonCAN3.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN3.setPosition(15, 15, 50, 50);
    ButtonCAN3.setAlpha(0);
    containerCAN3.add(ButtonCAN3);

    textCAN3.setXY(18, 84);
    textCAN3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN3.setLinespacing(0);
    textCAN3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CPNS));
    containerCAN3.add(textCAN3);

    containerCAN4.setPosition(421, 52, 80, 107);

    circleCAN4.setPosition(0, 0, 80, 80);
    circleCAN4.setCenter(40, 40);
    circleCAN4.setRadius(30);
    circleCAN4.setLineWidth(0);
    circleCAN4.setArc(0, 360);
    circleCAN4Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN4.setPainter(circleCAN4Painter);
    containerCAN4.add(circleCAN4);

    ButtonCAN4.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN4.setBorderSize(5);
    ButtonCAN4.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN4.setPosition(15, 15, 50, 50);
    ButtonCAN4.setAlpha(0);
    containerCAN4.add(ButtonCAN4);

    textCAN4.setXY(18, 84);
    textCAN4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN4.setLinespacing(0);
    textCAN4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2DIY));
    containerCAN4.add(textCAN4);

    containerCAN5.setPosition(521, 52, 80, 107);

    circleCAN5.setPosition(0, 0, 80, 80);
    circleCAN5.setCenter(40, 40);
    circleCAN5.setRadius(30);
    circleCAN5.setLineWidth(0);
    circleCAN5.setArc(0, 360);
    circleCAN5Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN5.setPainter(circleCAN5Painter);
    containerCAN5.add(circleCAN5);

    ButtonCAN5.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN5.setBorderSize(5);
    ButtonCAN5.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN5.setPosition(15, 15, 50, 50);
    ButtonCAN5.setAlpha(0);
    containerCAN5.add(ButtonCAN5);

    textCAN5.setXY(18, 84);
    textCAN5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN5.setLinespacing(0);
    textCAN5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KFEW));
    containerCAN5.add(textCAN5);

    containerCAN6.setPosition(618, 52, 80, 107);

    circleCAN6.setPosition(0, 0, 80, 80);
    circleCAN6.setCenter(40, 40);
    circleCAN6.setRadius(30);
    circleCAN6.setLineWidth(0);
    circleCAN6.setArc(0, 360);
    circleCAN6Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN6.setPainter(circleCAN6Painter);
    containerCAN6.add(circleCAN6);

    ButtonCAN6.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN6.setBorderSize(5);
    ButtonCAN6.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN6.setPosition(15, 15, 50, 50);
    ButtonCAN6.setAlpha(0);
    containerCAN6.add(ButtonCAN6);

    textCAN6.setXY(18, 84);
    textCAN6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN6.setLinespacing(0);
    textCAN6.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UFLA));
    containerCAN6.add(textCAN6);

    containerCAN7.setPosition(119, 187, 80, 107);

    circleCAN7.setPosition(0, 0, 80, 80);
    circleCAN7.setCenter(40, 40);
    circleCAN7.setRadius(30);
    circleCAN7.setLineWidth(0);
    circleCAN7.setArc(0, 360);
    circleCAN7Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN7.setPainter(circleCAN7Painter);
    containerCAN7.add(circleCAN7);

    ButtonCAN7.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN7.setBorderSize(5);
    ButtonCAN7.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN7.setPosition(15, 15, 50, 50);
    ButtonCAN7.setAlpha(0);
    containerCAN7.add(ButtonCAN7);

    textCAN7.setXY(18, 84);
    textCAN7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN7.setLinespacing(0);
    textCAN7.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DGKR));
    containerCAN7.add(textCAN7);

    containerCAN8.setPosition(225, 187, 80, 107);

    circleCAN8.setPosition(0, 0, 80, 80);
    circleCAN8.setCenter(40, 40);
    circleCAN8.setRadius(30);
    circleCAN8.setLineWidth(0);
    circleCAN8.setArc(0, 360);
    circleCAN8Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN8.setPainter(circleCAN8Painter);
    containerCAN8.add(circleCAN8);

    ButtonCAN8.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN8.setBorderSize(5);
    ButtonCAN8.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN8.setPosition(15, 15, 50, 50);
    ButtonCAN8.setAlpha(0);
    containerCAN8.add(ButtonCAN8);

    textCAN8.setXY(18, 84);
    textCAN8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN8.setLinespacing(0);
    textCAN8.setTypedText(touchgfx::TypedText(T___SINGLEUSE_STYN));
    containerCAN8.add(textCAN8);

    containerCAN9.setPosition(320, 187, 80, 107);

    circleCAN9.setPosition(0, 0, 80, 80);
    circleCAN9.setCenter(40, 40);
    circleCAN9.setRadius(30);
    circleCAN9.setLineWidth(0);
    circleCAN9.setArc(0, 360);
    circleCAN9Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN9.setPainter(circleCAN9Painter);
    containerCAN9.add(circleCAN9);

    ButtonCAN9.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN9.setBorderSize(5);
    ButtonCAN9.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN9.setPosition(15, 15, 50, 50);
    ButtonCAN9.setAlpha(0);
    containerCAN9.add(ButtonCAN9);

    textCAN9.setXY(18, 84);
    textCAN9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN9.setLinespacing(0);
    textCAN9.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PVXW));
    containerCAN9.add(textCAN9);

    containerCAN10.setPosition(421, 187, 80, 107);

    circleCAN10.setPosition(0, 0, 80, 80);
    circleCAN10.setCenter(40, 40);
    circleCAN10.setRadius(30);
    circleCAN10.setLineWidth(0);
    circleCAN10.setArc(0, 360);
    circleCAN10Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN10.setPainter(circleCAN10Painter);
    containerCAN10.add(circleCAN10);

    ButtonCAN10.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN10.setBorderSize(5);
    ButtonCAN10.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN10.setPosition(15, 15, 50, 50);
    ButtonCAN10.setAlpha(0);
    containerCAN10.add(ButtonCAN10);

    textCAN10.setXY(13, 84);
    textCAN10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN10.setLinespacing(0);
    textCAN10.setTypedText(touchgfx::TypedText(T___SINGLEUSE_SXJ4));
    containerCAN10.add(textCAN10);

    containerCAN11.setPosition(521, 187, 80, 107);

    circleCAN11.setPosition(0, 0, 80, 80);
    circleCAN11.setCenter(40, 40);
    circleCAN11.setRadius(30);
    circleCAN11.setLineWidth(0);
    circleCAN11.setArc(0, 360);
    circleCAN11Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN11.setPainter(circleCAN11Painter);
    containerCAN11.add(circleCAN11);

    ButtonCAN11.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN11.setBorderSize(5);
    ButtonCAN11.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN11.setPosition(15, 15, 50, 50);
    ButtonCAN11.setAlpha(0);
    containerCAN11.add(ButtonCAN11);

    textCAN11.setXY(15, 84);
    textCAN11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN11.setLinespacing(0);
    textCAN11.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HY9A));
    containerCAN11.add(textCAN11);

    containerCAN12.setPosition(618, 187, 80, 107);

    circleCAN12.setPosition(0, 0, 80, 80);
    circleCAN12.setCenter(40, 40);
    circleCAN12.setRadius(30);
    circleCAN12.setLineWidth(0);
    circleCAN12.setArc(0, 360);
    circleCAN12Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN12.setPainter(circleCAN12Painter);
    containerCAN12.add(circleCAN12);

    ButtonCAN12.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN12.setBorderSize(5);
    ButtonCAN12.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN12.setPosition(15, 15, 50, 50);
    ButtonCAN12.setAlpha(0);
    containerCAN12.add(ButtonCAN12);

    textCAN12.setXY(13, 80);
    textCAN12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN12.setLinespacing(0);
    textCAN12.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ELKK));
    containerCAN12.add(textCAN12);

    containerCAN13.setPosition(119, 315, 80, 107);

    circleCAN13.setPosition(0, 0, 80, 80);
    circleCAN13.setCenter(40, 40);
    circleCAN13.setRadius(30);
    circleCAN13.setLineWidth(0);
    circleCAN13.setArc(0, 360);
    circleCAN13Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN13.setPainter(circleCAN13Painter);
    containerCAN13.add(circleCAN13);

    ButtonCAN13.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN13.setBorderSize(5);
    ButtonCAN13.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN13.setPosition(15, 15, 50, 50);
    ButtonCAN13.setAlpha(0);
    containerCAN13.add(ButtonCAN13);

    textCAN13.setXY(18, 84);
    textCAN13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN13.setLinespacing(0);
    textCAN13.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ISDB));
    containerCAN13.add(textCAN13);

    containerCAN14.setPosition(225, 315, 80, 107);

    circleCAN14.setPosition(0, 0, 80, 80);
    circleCAN14.setCenter(40, 40);
    circleCAN14.setRadius(30);
    circleCAN14.setLineWidth(0);
    circleCAN14.setArc(0, 360);
    circleCAN14Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN14.setPainter(circleCAN14Painter);
    containerCAN14.add(circleCAN14);

    ButtonCAN14.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN14.setBorderSize(5);
    ButtonCAN14.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN14.setPosition(15, 15, 50, 50);
    ButtonCAN14.setAlpha(0);
    containerCAN14.add(ButtonCAN14);

    textCAN14.setXY(18, 84);
    textCAN14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN14.setLinespacing(0);
    textCAN14.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4GGE));
    containerCAN14.add(textCAN14);

    containerCAN15.setPosition(320, 315, 80, 107);

    circleCAN15.setPosition(0, 0, 80, 80);
    circleCAN15.setCenter(40, 40);
    circleCAN15.setRadius(30);
    circleCAN15.setLineWidth(0);
    circleCAN15.setArc(0, 360);
    circleCAN15Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN15.setPainter(circleCAN15Painter);
    containerCAN15.add(circleCAN15);

    ButtonCAN15.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN15.setBorderSize(5);
    ButtonCAN15.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN15.setPosition(15, 15, 50, 50);
    ButtonCAN15.setAlpha(0);
    containerCAN15.add(ButtonCAN15);

    textCAN15.setXY(13, 84);
    textCAN15.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN15.setLinespacing(0);
    textCAN15.setTypedText(touchgfx::TypedText(T___SINGLEUSE_SBHR));
    containerCAN15.add(textCAN15);

    containerCAN16.setPosition(421, 315, 80, 107);

    circleCAN16.setPosition(0, 0, 80, 80);
    circleCAN16.setCenter(40, 40);
    circleCAN16.setRadius(30);
    circleCAN16.setLineWidth(0);
    circleCAN16.setArc(0, 360);
    circleCAN16Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN16.setPainter(circleCAN16Painter);
    containerCAN16.add(circleCAN16);

    ButtonCAN16.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN16.setBorderSize(5);
    ButtonCAN16.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN16.setPosition(15, 15, 50, 50);
    ButtonCAN16.setAlpha(0);
    containerCAN16.add(ButtonCAN16);

    textCAN16.setXY(13, 84);
    textCAN16.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN16.setLinespacing(0);
    textCAN16.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GULS));
    containerCAN16.add(textCAN16);

    containerCAN17.setPosition(521, 315, 80, 107);

    circleCAN17.setPosition(0, 0, 80, 80);
    circleCAN17.setCenter(40, 40);
    circleCAN17.setRadius(30);
    circleCAN17.setLineWidth(0);
    circleCAN17.setArc(0, 360);
    circleCAN17Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN17.setPainter(circleCAN17Painter);
    containerCAN17.add(circleCAN17);

    ButtonCAN17.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN17.setBorderSize(5);
    ButtonCAN17.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN17.setPosition(15, 15, 50, 50);
    ButtonCAN17.setAlpha(0);
    containerCAN17.add(ButtonCAN17);

    textCAN17.setXY(15, 84);
    textCAN17.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN17.setLinespacing(0);
    textCAN17.setTypedText(touchgfx::TypedText(T___SINGLEUSE_09DG));
    containerCAN17.add(textCAN17);

    containerCAN18.setPosition(618, 315, 80, 107);

    circleCAN18.setPosition(0, 0, 80, 80);
    circleCAN18.setCenter(40, 40);
    circleCAN18.setRadius(30);
    circleCAN18.setLineWidth(0);
    circleCAN18.setArc(0, 360);
    circleCAN18Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    circleCAN18.setPainter(circleCAN18Painter);
    containerCAN18.add(circleCAN18);

    ButtonCAN18.setBoxWithBorderPosition(0, 0, 50, 50);
    ButtonCAN18.setBorderSize(5);
    ButtonCAN18.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    ButtonCAN18.setPosition(15, 15, 50, 50);
    ButtonCAN18.setAlpha(0);
    containerCAN18.add(ButtonCAN18);

    textCAN18.setXY(13, 84);
    textCAN18.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCAN18.setLinespacing(0);
    textCAN18.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PWFW));
    containerCAN18.add(textCAN18);

    containerCAN.setPosition(137, 430, 50, 50);

    Button_CAN.setBoxWithBorderPosition(0, 0, 50, 50);
    Button_CAN.setBorderSize(5);
    Button_CAN.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_CAN.setPosition(0, 0, 50, 50);
    Button_CAN.setAlpha(0);
    containerCAN.add(Button_CAN);

    textAreaCAN.setXY(9, 14);
    textAreaCAN.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaCAN.setLinespacing(0);
    textAreaCAN.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6KO5));
    containerCAN.add(textAreaCAN);

    containerLIN.setPosition(238, 430, 54, 50);

    Button_LIN.setBoxWithBorderPosition(0, 0, 55, 50);
    Button_LIN.setBorderSize(5);
    Button_LIN.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_LIN.setPosition(-2, 0, 55, 50);
    Button_LIN.setAlpha(0);
    Button_LIN.setAction(flexButtonCallback);
    containerLIN.add(Button_LIN);

    textAreaLIN.setXY(9, 14);
    textAreaLIN.setColor(touchgfx::Color::getColorFromRGB(161, 157, 157));
    textAreaLIN.setLinespacing(0);
    textAreaLIN.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GL62));
    containerLIN.add(textAreaLIN);

    containerUART.setPosition(333, 430, 52, 50);

    Button_UART.setBoxWithBorderPosition(0, 0, 47, 50);
    Button_UART.setBorderSize(5);
    Button_UART.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_UART.setPosition(4, 0, 47, 50);
    Button_UART.setAlpha(0);
    Button_UART.setAction(flexButtonCallback);
    containerUART.add(Button_UART);

    textAreaUART.setXY(5, 14);
    textAreaUART.setColor(touchgfx::Color::getColorFromRGB(161, 157, 157));
    textAreaUART.setLinespacing(0);
    textAreaUART.setTypedText(touchgfx::TypedText(T___SINGLEUSE_69I9));
    containerUART.add(textAreaUART);

    containerFlexray.setPosition(410, 430, 102, 50);

    Button_Flexray.setBoxWithBorderPosition(0, 0, 102, 50);
    Button_Flexray.setBorderSize(5);
    Button_Flexray.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_Flexray.setPosition(0, 0, 102, 50);
    Button_Flexray.setAlpha(0);
    Button_Flexray.setAction(flexButtonCallback);
    containerFlexray.add(Button_Flexray);

    textAreaFlexray.setXY(13, 14);
    textAreaFlexray.setColor(touchgfx::Color::getColorFromRGB(161, 157, 157));
    textAreaFlexray.setLinespacing(0);
    textAreaFlexray.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QXTJ));
    containerFlexray.add(textAreaFlexray);

    containerETH.setPosition(534, 430, 102, 50);

    Button_ETH.setBoxWithBorderPosition(0, 0, 102, 50);
    Button_ETH.setBorderSize(5);
    Button_ETH.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_ETH.setPosition(0, 0, 102, 50);
    Button_ETH.setAlpha(0);
    Button_ETH.setAction(flexButtonCallback);
    containerETH.add(Button_ETH);

    textAreaETH.setXY(13, 14);
    textAreaETH.setColor(touchgfx::Color::getColorFromRGB(161, 157, 157));
    textAreaETH.setLinespacing(0);
    textAreaETH.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PSDR));
    containerETH.add(textAreaETH);

    Button_Bus_Main.setXY(0, 0);
    Button_Bus_Main.setBitmaps(touchgfx::Bitmap(BITMAP_IC_ACTION_ARROW_LEFT_LIGHT_ID), touchgfx::Bitmap(BITMAP_IC_ACTION_ARROW_LEFT_ID));
    Button_Bus_Main.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(containerCAN1);
    add(containerCAN2);
    add(containerCAN3);
    add(containerCAN4);
    add(containerCAN5);
    add(containerCAN6);
    add(containerCAN7);
    add(containerCAN8);
    add(containerCAN9);
    add(containerCAN10);
    add(containerCAN11);
    add(containerCAN12);
    add(containerCAN13);
    add(containerCAN14);
    add(containerCAN15);
    add(containerCAN16);
    add(containerCAN17);
    add(containerCAN18);
    add(containerCAN);
    add(containerLIN);
    add(containerUART);
    add(containerFlexray);
    add(containerETH);
    add(Button_Bus_Main);
}

void sub_Busload_CANViewBase::setupScreen()
{

}

void sub_Busload_CANViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Button_Bus_Main)
    {
        //Interaction1
        //When Button_Bus_Main clicked change screen to MainBoard
        //Go to MainBoard with no screen transition
        application().gotoMainBoardScreenNoTransition();
    }
}

void sub_Busload_CANViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &Button_LIN)
    {
        //Interaction2
        //When Button_LIN clicked change screen to sub_Busload_LIN
        //Go to sub_Busload_LIN with no screen transition
        application().gotosub_Busload_LINScreenNoTransition();
    }
    else if (&src == &Button_UART)
    {
        //Interaction3
        //When Button_UART clicked change screen to sub_Busload_UART
        //Go to sub_Busload_UART with no screen transition
        application().gotosub_Busload_UARTScreenNoTransition();
    }
    else if (&src == &Button_Flexray)
    {
        //Interaction4
        //When Button_Flexray clicked change screen to sub_Busload_Flexray
        //Go to sub_Busload_Flexray with no screen transition
        application().gotosub_Busload_FlexrayScreenNoTransition();
    }
    else if (&src == &Button_ETH)
    {
        //Interaction5
        //When Button_ETH clicked change screen to sub_Busload_ETH
        //Go to sub_Busload_ETH with no screen transition
        application().gotosub_Busload_ETHScreenNoTransition();
    }
}
