#ifndef IVIEW_H
#define IVIEW_H

class IView {
public:
  virtual ~IView() = default;
  virtual void Render() = 0;
};

#endif // IVIEW_H
