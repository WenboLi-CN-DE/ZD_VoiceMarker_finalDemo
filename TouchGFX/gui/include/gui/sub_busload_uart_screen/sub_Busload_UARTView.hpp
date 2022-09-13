#ifndef SUB_BUSLOAD_UARTVIEW_HPP
#define SUB_BUSLOAD_UARTVIEW_HPP

#include <gui_generated/sub_busload_uart_screen/sub_Busload_UARTViewBase.hpp>
#include <gui/sub_busload_uart_screen/sub_Busload_UARTPresenter.hpp>

class sub_Busload_UARTView : public sub_Busload_UARTViewBase
{
public:
    sub_Busload_UARTView();
    virtual ~sub_Busload_UARTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_BUSLOAD_UARTVIEW_HPP
