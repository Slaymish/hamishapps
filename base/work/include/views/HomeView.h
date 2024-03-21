#ifndef HOMEVIEW_H
#define HOMEVIEW_H

#include "IView.h"
#include "imgui.h"

class HomeView : public IView {
public:
  void Render() override;
};

#endif // HOMEVIEW_H
