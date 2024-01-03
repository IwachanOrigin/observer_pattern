
// ref : https://codezine.jp/article/detail/5327?p=2&anchor=0

#include "graphobserver.h"
#include "digitobserver.h"
#include "randomnumbergenerator.h"
#include <memory>

int main(int argc, char* argv[])
{
  RandomNumberGenerator generator;
  std::shared_ptr<GraphObserver> graph = std::make_shared<GraphObserver>();
  std::shared_ptr<DigitObserver> digit = std::make_shared<DigitObserver>();

  generator.addObserver(graph);
  generator.addObserver(digit);
  generator.execute();

  return 0;
}

