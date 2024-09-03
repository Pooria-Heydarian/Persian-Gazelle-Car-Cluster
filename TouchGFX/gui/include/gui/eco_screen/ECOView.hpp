#ifndef ECOVIEW_HPP
#define ECOVIEW_HPP

#include <gui_generated/eco_screen/ECOViewBase.hpp>
#include <gui/eco_screen/ECOPresenter.hpp>

class ECOView : public ECOViewBase
{
public:
    ECOView();
    virtual ~ECOView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ECOVIEW_HPP
