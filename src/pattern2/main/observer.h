
#ifndef OBSERVER_H_
#define OBSERVER_H_

class Subject;

class Observer
{
public:
  explicit Observer() = default;
  virtual ~Observer() = default;

  virtual void update(Subject* observer) = 0;
};

#endif // OBSERVER_H_
