/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SUB_BUSLOAD_FLEXRAYVIEWBASE_HPP
#define SUB_BUSLOAD_FLEXRAYVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/sub_busload_flexray_screen/sub_Busload_FlexrayPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>

class sub_Busload_FlexrayViewBase : public touchgfx::View<sub_Busload_FlexrayPresenter>
{
public:
    sub_Busload_FlexrayViewBase();
    virtual ~sub_Busload_FlexrayViewBase() {}
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
    touchgfx::Container containerFLX1;
    touchgfx::Circle circleFLX1;
    touchgfx::PainterRGB565 circleFLX1Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonFLX1;
    touchgfx::TextArea textFLX1;
    touchgfx::Container containerFLX2;
    touchgfx::Circle circleFLX2;
    touchgfx::PainterRGB565 circleFLX2Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonFLX2;
    touchgfx::TextArea textFLX2;
    touchgfx::Container containerFLX3;
    touchgfx::Circle circleFLX3;
    touchgfx::PainterRGB565 circleFLX3Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonFLX3;
    touchgfx::TextArea textFLX3;
    touchgfx::Container containerFLX4;
    touchgfx::Circle circleFLX4;
    touchgfx::PainterRGB565 circleFLX4Painter;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  ButtonFLX4;
    touchgfx::TextArea textFLX4;
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
    touchgfx::Callback<sub_Busload_FlexrayViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<sub_Busload_FlexrayViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

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

#endif // SUB_BUSLOAD_FLEXRAYVIEWBASE_HPP