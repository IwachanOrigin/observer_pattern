
#ifndef RANDOM_NUMBER_GENERATOR_H_
#define RANDOM_NUMBER_GENERATOR_H_

#include "numbergenerator.h"

class RandomNumberGenerator : public NumberGenerator
{
public:
    explicit RandomNumberGenerator();
    ~RandomNumberGenerator();

    int number() override { return m_number; }
    void execute() override;

private:
    int m_number;
};

#endif