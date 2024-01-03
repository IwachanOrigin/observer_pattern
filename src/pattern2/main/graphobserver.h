
#ifndef GRAPH_OBSERVER_H_
#define GRAPH_OBSERVER_H_

#include "observer.h"

class GraphObserver : public Observer
{
public:
  explicit GraphObserver();
  virtual ~GraphObserver();

  void update(Subject* generator);
};

#endif // GRAPH_OBSERVER_H_

