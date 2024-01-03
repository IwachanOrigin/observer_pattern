
#ifndef NUMBER_GENERATOR_H_
#define NUMBER_GENERATOR_H_

#include <vector>

class Observer;

class NumberGenerator
{
public:
  explicit NumberGenerator();
  virtual ~NumberGenerator();

  void addObserver(Observer* observer);
  void deleteObserver(Observer* observer);
  void notifyObservers();

  virtual int number() = 0;
  virtual void execute() = 0;

private:
  std::vector<Observer*> observers;
};

#endif
