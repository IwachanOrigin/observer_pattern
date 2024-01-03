
#include "observer.h"
#include "numbergenerator.h"
#include <random>

NumberGenerator::NumberGenerator()
  : Subject()
  , m_number(0)
{
}

NumberGenerator::~NumberGenerator()
{
}

void NumberGenerator::execute()
{
  std::random_device rnd;
  std::mt19937 mt(rnd());
  std::uniform_int_distribution<> rand100(0, 99);
  for (int i = 0; i < 20; i++)
  {
    m_number = rand100(mt);
    this->notifyObservers();
  }
}

