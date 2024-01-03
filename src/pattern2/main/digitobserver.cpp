
#include "digitobserver.h"
#include "randomnumbergenerator.h"
#include <thread>
#include <chrono>
#include <iostream>

DigitObserver::DigitObserver()
  : Observer()
{
}

DigitObserver::~DigitObserver()
{
}

void DigitObserver::update(Subject* generator)
{
  auto numGen = static_cast<RandomNumberGenerator*>(generator);
  std::cout << "DigitObserver : " << numGen->number() << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

