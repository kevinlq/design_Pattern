#ifndef OPERATORMUL_H
#define OPERATORMUL_H

#include "operator.h"

class OperatorMul : public Operator
{
public:
    OperatorMul();
    ~OperatorMul();

    double getResult() override;
};

#endif // OPERATORMUL_H
