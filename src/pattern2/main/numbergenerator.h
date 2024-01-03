
#ifndef NUMBER_GENERATOR_H_
#define NUMBER_GENERATOR_H_

#include "subject.h"
#include <vector>
#include <memory>

class NumberGenerator : public Subject
{
public:
  explicit NumberGenerator();
  virtual ~NumberGenerator();

  int number() const { return m_number; }
  void execute();

private:
  int m_number;
};

#endif
