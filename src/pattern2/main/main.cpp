
#include "graphobserver.h"
#include "digitobserver.h"
#include "numbergenerator.h"
#include <memory>

int main(int argc, char* argv[])
{
  NumberGenerator generator;
  std::shared_ptr<GraphObserver> graph = std::make_shared<GraphObserver>();
  std::shared_ptr<DigitObserver> digit = std::make_shared<DigitObserver>();

  generator.addObserver(graph);
  generator.addObserver(digit);
  generator.execute();

  return 0;
}

