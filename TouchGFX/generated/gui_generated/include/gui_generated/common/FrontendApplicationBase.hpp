/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoSportScreenNoTransition();
    }

    // Sport
    void gotoSportScreenNoTransition();

    // Cluster
    void gotoClusterScreenWipeTransitionSouth();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Sport
    void gotoSportScreenNoTransitionImpl();

    // Cluster
    void gotoClusterScreenWipeTransitionSouthImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
