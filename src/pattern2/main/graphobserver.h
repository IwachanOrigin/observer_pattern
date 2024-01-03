
#ifndef GRAPH_OBSERVER_H_
#define GRAPH_OBSERVER_H_

#include "observer.h"

class GraphObserver : public Observer
{
public:
  explicit GraphObserver();
  ~GraphObserver();

  void update(NumberGenerator &generator);
};

#endif // GRAPH_OBSERVER_H_
