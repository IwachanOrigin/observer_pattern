
#include "digitobserver.h"
#include "numbergenerator.h"
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
  auto numGen = static_cast<NumberGenerator*>(generator);
  std::cout << "DigitObserver : " << numGen->number() << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

