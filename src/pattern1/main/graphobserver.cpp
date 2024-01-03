
#include "graphobserver.h"
#include "numbergenerator.h"
#include <thread>
#include <chrono>
#include <iostream>

GraphObserver::GraphObserver()
  : Observer()
{
}

GraphObserver::~GraphObserver()
{
}

void GraphObserver::update(NumberGenerator &generator)
{
  std::cout << "GraphObserver : ";
  int count = generator.number();
  for (int i = 0; i < count; i++)
  {
    std::cout << "*";
  }
  std::cout << " " << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
}
