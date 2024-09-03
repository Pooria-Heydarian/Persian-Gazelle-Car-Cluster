#ifndef SPORTPRESENTER_HPP
#define SPORTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SportView;

class SportPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SportPresenter(SportView& v);

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

    virtual ~SportPresenter() {}

private:
    SportPresenter();

    SportView& view;
};

#endif // SPORTPRESENTER_HPP
