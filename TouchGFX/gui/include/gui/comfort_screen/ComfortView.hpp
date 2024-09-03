#ifndef COMFORTVIEW_HPP
#define COMFORTVIEW_HPP

#include <gui_generated/comfort_screen/ComfortViewBase.hpp>
#include <gui/comfort_screen/ComfortPresenter.hpp>

class ComfortView : public ComfortViewBase
{
public:
    ComfortView();
    virtual ~ComfortView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // COMFORTVIEW_HPP
