#include "operatorsub.h"

OperatorSub::OperatorSub()
{

}

OperatorSub::~OperatorSub()
{
}

double OperatorSub::getResult()
{
    double result;

    result = getNumberA() - getNumberB();

    return result;
}
