
#include "observer.h"
#include "randomnumbergenerator.h"
#include <random>

RandomNumberGenerator::RandomNumberGenerator()
  : Subject()
  , m_number(0)
{
}

RandomNumberGenerator::~RandomNumberGenerator()
{
}

void RandomNumberGenerator::execute()
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

