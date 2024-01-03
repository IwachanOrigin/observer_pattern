
#ifndef DIGIT_OBSERVER_H_
#define DIGIT_OBSERVER_H_

#include "observer.h"

class DigitObserver : public Observer
{
public:
  explicit DigitObserver();
  virtual ~DigitObserver();

  void update(Subject* observer) override;
};

#endif // DIGIT_OBSERVER_H_
