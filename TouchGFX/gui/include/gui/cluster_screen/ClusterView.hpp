#ifndef CLUSTERVIEW_HPP
#define CLUSTERVIEW_HPP

#include <gui_generated/cluster_screen/ClusterViewBase.hpp>
#include <gui/cluster_screen/ClusterPresenter.hpp>

class ClusterView : public ClusterViewBase
{
public:
    ClusterView();
    virtual ~ClusterView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CLUSTERVIEW_HPP
