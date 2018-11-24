#ifndef OPERATORSUB_H
#define OPERATORSUB_H

#include "operator.h"

class OperatorSub : public OperatorBase
{
public:
    OperatorSub();
    ~OperatorSub();

    double virtual getResult();
};

#endif // OPERATORSUB_H
