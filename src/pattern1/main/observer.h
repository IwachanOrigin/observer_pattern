
#ifndef OBSERVER_H_
#define OBSERVER_H_

class NumberGenerator;

class Observer
{
public:
  Observer();
  virtual ~Observer();

  virtual void update(NumberGenerator &observer) = 0;
};

#endif // OBSERVER_H_
