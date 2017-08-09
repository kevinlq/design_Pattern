#ifndef OPERATORMUL_H
#define OPERATORMUL_H

#include "operator.h"

class OperatorMul : public Operator
{
public:
    OperatorMul();
    ~OperatorMul();

    double virtual getResult();
};

#endif // OPERATORMUL_H
