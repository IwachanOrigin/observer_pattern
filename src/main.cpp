
#include "randomnumbergenerator.h"
#include "graphobserver.h"
#include "digitobserver.h"


int main(int argc, char* argv[])
{
    NumberGenerator *generator = new RandomNumberGenerator();
    GraphObserver graph = GraphObserver();
    DigitObserver digit = DigitObserver();

    generator->addObserver(&graph);
    generator->addObserver(&digit);
    generator->execute();

    delete generator;

    return 0;
}