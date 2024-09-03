#ifndef COMFORTPRESENTER_HPP
#define COMFORTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ComfortView;

class ComfortPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ComfortPresenter(ComfortView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ComfortPresenter() {}

private:
    ComfortPresenter();

    ComfortView& view;
};

#endif // COMFORTPRESENTER_HPP
