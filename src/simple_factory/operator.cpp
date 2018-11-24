#include "operator.h"

#include <QDebug>

struct DataPrivate{
    double dm_number1;
    double dm_number2;
};

OperatorBase::OperatorBase()
{
    m_dPtr = new DataPrivate;
}

OperatorBase::~OperatorBase()
{
}

void OperatorBase::setNumberA(double x)
{
    m_dPtr->dm_number1 = x;
}

double OperatorBase::getNumberA()
{
    return m_dPtr->dm_number1;
}

void OperatorBase::setNumberB(double y)
{
    m_dPtr->dm_number2 = y;
}

double OperatorBase::getNumberB()
{
    return m_dPtr->dm_number2;
}
