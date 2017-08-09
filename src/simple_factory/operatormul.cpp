#include "operatormul.h"

OperatorMul::OperatorMul()
{
}

OperatorMul::~OperatorMul()
{
}

double OperatorMul::getResult()
{
    double result;

    result = getNumberA() * getNumberB();

    return result;
}
