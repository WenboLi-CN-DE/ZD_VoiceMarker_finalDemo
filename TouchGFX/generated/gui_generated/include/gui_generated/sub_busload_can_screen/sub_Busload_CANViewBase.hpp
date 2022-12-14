/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SUB_BUSLOAD_CANVIEWBASE_HPP
#define SUB_BUSLOAD_CANVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/sub_busload_can_screen/sub_Busload_CANPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>

class sub_Busload_CANViewBase : public touchgfx::View<sub_Busload_CANPresenter>
{
public:
    sub_Busload_CANViewBase();
    virtual ~sub_Busload_CANViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::Container containerCAN1;
    touchgfx::Circle circleCAN1;
    touchgfx::PainterRGB565 circleCAN1Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN1;
    touchgfx::TextArea textCAN1;
    touchgfx::Container containerCAN2;
    touchgfx::Circle circleCAN2;
    touchgfx::PainterRGB565 circleCAN2Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN2;
    touchgfx::TextArea textCAN2;
    touchgfx::Container containerCAN3;
    touchgfx::Circle circleCAN3;
    touchgfx::PainterRGB565 circleCAN3Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN3;
    touchgfx::TextArea textCAN3;
    touchgfx::Container containerCAN4;
    touchgfx::Circle circleCAN4;
    touchgfx::PainterRGB565 circleCAN4Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN4;
    touchgfx::TextArea textCAN4;
    touchgfx::Container containerCAN5;
    touchgfx::Circle circleCAN5;
    touchgfx::PainterRGB565 circleCAN5Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN5;
    touchgfx::TextArea textCAN5;
    touchgfx::Container containerCAN6;
    touchgfx::Circle circleCAN6;
    touchgfx::PainterRGB565 circleCAN6Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN6;
    touchgfx::TextArea textCAN6;
    touchgfx::Container containerCAN7;
    touchgfx::Circle circleCAN7;
    touchgfx::PainterRGB565 circleCAN7Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN7;
    touchgfx::TextArea textCAN7;
    touchgfx::Container containerCAN8;
    touchgfx::Circle circleCAN8;
    touchgfx::PainterRGB565 circleCAN8Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN8;
    touchgfx::TextArea textCAN8;
    touchgfx::Container containerCAN9;
    touchgfx::Circle circleCAN9;
    touchgfx::PainterRGB565 circleCAN9Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN9;
    touchgfx::TextArea textCAN9;
    touchgfx::Container containerCAN10;
    touchgfx::Circle circleCAN10;
    touchgfx::PainterRGB565 circleCAN10Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN10;
    touchgfx::TextArea textCAN10;
    touchgfx::Container containerCAN11;
    touchgfx::Circle circleCAN11;
    touchgfx::PainterRGB565 circleCAN11Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN11;
    touchgfx::TextArea textCAN11;
    touchgfx::Container containerCAN12;
    touchgfx::Circle circleCAN12;
    touchgfx::PainterRGB565 circleCAN12Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN12;
    touchgfx::TextArea textCAN12;
    touchgfx::Container containerCAN13;
    touchgfx::Circle circleCAN13;
    touchgfx::PainterRGB565 circleCAN13Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN13;
    touchgfx::TextArea textCAN13;
    touchgfx::Container containerCAN14;
    touchgfx::Circle circleCAN14;
    touchgfx::PainterRGB565 circleCAN14Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN14;
    touchgfx::TextArea textCAN14;
    touchgfx::Container containerCAN15;
    touchgfx::Circle circleCAN15;
    touchgfx::PainterRGB565 circleCAN15Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN15;
    touchgfx::TextArea textCAN15;
    touchgfx::Container containerCAN16;
    touchgfx::Circle circleCAN16;
    touchgfx::PainterRGB565 circleCAN16Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN16;
    touchgfx::TextArea textCAN16;
    touchgfx::Container containerCAN17;
    touchgfx::Circle circleCAN17;
    touchgfx::PainterRGB565 circleCAN17Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN17;
    touchgfx::TextArea textCAN17;
    touchgfx::Container containerCAN18;
    touchgfx::Circle circleCAN18;
    touchgfx::PainterRGB565 circleCAN18Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonCAN18;
    touchgfx::TextArea textCAN18;
    touchgfx::Container containerCAN;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_CAN;
    touchgfx::TextArea textAreaCAN;
    touchgfx::Container containerLIN;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_LIN;
    touchgfx::TextArea textAreaLIN;
    touchgfx::Container containerUART;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_UART;
    touchgfx::TextArea textAreaUART;
    touchgfx::Container containerFlexray;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_Flexray;
    touchgfx::TextArea textAreaFlexray;
    touchgfx::Container containerETH;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_ETH;
    touchgfx::TextArea textAreaETH;
    touchgfx::Button Button_Bus_Main;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<sub_Busload_CANViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<sub_Busload_CANViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SUB_BUSLOAD_CANVIEWBASE_HPP
