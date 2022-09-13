#ifndef SUB_BUSLOAD_ETHVIEW_HPP
#define SUB_BUSLOAD_ETHVIEW_HPP

#include <gui_generated/sub_busload_eth_screen/sub_Busload_ETHViewBase.hpp>
#include <gui/sub_busload_eth_screen/sub_Busload_ETHPresenter.hpp>

class sub_Busload_ETHView : public sub_Busload_ETHViewBase
{
public:
    sub_Busload_ETHView();
    virtual ~sub_Busload_ETHView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SUB_BUSLOAD_ETHVIEW_HPP
