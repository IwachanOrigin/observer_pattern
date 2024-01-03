
#include "observer.h"
#include "numbergenerator.h"

NumberGenerator::NumberGenerator()
{
}

NumberGenerator::~NumberGenerator()
{
}

void NumberGenerator::addObserver(Observer* observer)
{
  observers.push_back(observer);
}

void NumberGenerator::deleteObserver(Observer* observer)
{
  for (auto itr = observers.begin(); itr != observers.end();)
  {
    if (*itr == observer)
    {
      itr = observers.erase(itr);
    }
    else
    {
      itr++;
    }
  }
}

void NumberGenerator::notifyObservers()
{
  for (int i = 0; i < observers.size(); i++)
  {
    Observer* obs = observers[i];
    obs->update(*this);
  }
}
