#ifndef ECOPRESENTER_HPP
#define ECOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ECOView;

class ECOPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ECOPresenter(ECOView& v);

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

    virtual ~ECOPresenter() {}

private:
    ECOPresenter();

    ECOView& view;
};

#endif // ECOPRESENTER_HPP
