#ifndef OPERATORDIV_H
#define OPERATORDIV_H

#include "operator.h"

class OperatorDiv : public Operator
{
public:
    OperatorDiv();
    ~OperatorDiv();

    double virtual getResult();
};

#endif // OPERATORDIV_H
