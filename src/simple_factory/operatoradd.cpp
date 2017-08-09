#include "operatoradd.h"

OperatorAdd::OperatorAdd()
{
}

OperatorAdd::~OperatorAdd()
{
}

double OperatorAdd::getResult()
{
    double result;

    result = getNumberA() + getNumberB();

    return result;
}
