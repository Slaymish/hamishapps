#ifndef ABOUTVIEW_H
#define ABOUTVIEW_H

#include "IView.h"
#include "imgui.h"

class AboutView : public IView {
public:
  void Render() override;
};

#endif // ABOUTVIEW_H