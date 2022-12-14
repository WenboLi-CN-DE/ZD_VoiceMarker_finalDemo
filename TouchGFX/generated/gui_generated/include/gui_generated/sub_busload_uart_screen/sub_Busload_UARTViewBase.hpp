/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SUB_BUSLOAD_UARTVIEWBASE_HPP
#define SUB_BUSLOAD_UARTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/sub_busload_uart_screen/sub_Busload_UARTPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>

class sub_Busload_UARTViewBase : public touchgfx::View<sub_Busload_UARTPresenter>
{
public:
    sub_Busload_UARTViewBase();
    virtual ~sub_Busload_UARTViewBase() {}
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
    touchgfx::Container containerUART1;
    touchgfx::Circle circleUART1;
    touchgfx::PainterRGB565 circleUART1Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART1;
    touchgfx::TextArea textUART1;
    touchgfx::Container containerUART2;
    touchgfx::Circle circleUART2;
    touchgfx::PainterRGB565 circleUART2Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART2;
    touchgfx::TextArea textUART2;
    touchgfx::Container containerUART3;
    touchgfx::Circle circleUART3;
    touchgfx::PainterRGB565 circleUART3Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART3;
    touchgfx::TextArea textUART3;
    touchgfx::Container containerUART4;
    touchgfx::Circle circleUART4;
    touchgfx::PainterRGB565 circleUART4Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART4;
    touchgfx::TextArea textUART4;
    touchgfx::Container containerUART5;
    touchgfx::Circle circleUART5;
    touchgfx::PainterRGB565 circleUART5Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART5;
    touchgfx::TextArea textUART5;
    touchgfx::Container containerUART6;
    touchgfx::Circle circleUART6;
    touchgfx::PainterRGB565 circleUART6Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART6;
    touchgfx::TextArea textUART6;
    touchgfx::Container containerUART7;
    touchgfx::Circle circleUART7;
    touchgfx::PainterRGB565 circleUART7Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART7;
    touchgfx::TextArea textUART7;
    touchgfx::Container containerUART8;
    touchgfx::Circle circleUART8;
    touchgfx::PainterRGB565 circleUART8Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonUART8;
    touchgfx::TextArea textUART8;
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
    touchgfx::Callback<sub_Busload_UARTViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<sub_Busload_UARTViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

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

#endif // SUB_BUSLOAD_UARTVIEWBASE_HPP
