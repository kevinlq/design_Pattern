#ifndef OPERATORSUB_H
#define OPERATORSUB_H

#include "operator.h"

class OperatorSub : public Operator
{
public:
    OperatorSub();
    ~OperatorSub();

    double getResult() override;
};

#endif // OPERATORSUB_H
