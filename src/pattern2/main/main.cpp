
#include "randomnumbergenerator.h"
#include "graphobserver.h"
#include "digitobserver.h"
#include <memory>

int main(int argc, char* argv[])
{
  std::unique_ptr<NumberGenerator> generator(new RandomNumberGenerator());
  GraphObserver graph = GraphObserver();
  DigitObserver digit = DigitObserver();

  generator->addObserver(&graph);
  generator->addObserver(&digit);
  generator->execute();

  return 0;
}
