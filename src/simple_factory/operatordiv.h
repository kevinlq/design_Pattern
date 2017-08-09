#ifndef OPERATORDIV_H
#define OPERATORDIV_H

#include "operator.h"

class OperatorDiv : public Operator
{
public:
    OperatorDiv();
    ~OperatorDiv();

    double getResult();
};

#endif // OPERATORDIV_H
