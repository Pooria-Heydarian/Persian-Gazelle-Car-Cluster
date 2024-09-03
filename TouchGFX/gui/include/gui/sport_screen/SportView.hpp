#ifndef SPORTVIEW_HPP
#define SPORTVIEW_HPP

#include <gui_generated/sport_screen/SportViewBase.hpp>
#include <gui/sport_screen/SportPresenter.hpp>

class SportView : public SportViewBase
{
public:
    SportView();
    virtual ~SportView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SPORTVIEW_HPP
