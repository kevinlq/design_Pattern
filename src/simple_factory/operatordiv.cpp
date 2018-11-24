#include "operatordiv.h"

OperatorDiv::OperatorDiv()
{
}

OperatorDiv::~OperatorDiv()
{
}

double OperatorDiv::getResult()
{
    double result;

    if (getNumberB() == 0)
        return 0.0f;

    result = getNumberA() / getNumberB();

    return result;
}
