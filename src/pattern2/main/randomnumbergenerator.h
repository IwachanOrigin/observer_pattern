
#ifndef RANDOM_NUMBER_GENERATOR_H_
#define RANDOM_NUMBER_GENERATOR_H_

#include "subject.h"
#include <vector>
#include <memory>

class RandomNumberGenerator : public Subject
{
public:
  explicit RandomNumberGenerator();
  virtual ~RandomNumberGenerator();

  int number() const { return m_number; }
  void execute();

private:
  int m_number;
};

#endif
