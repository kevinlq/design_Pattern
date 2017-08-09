#include "operator.h"

#include <QDebug>

struct DataPrivate{
    double dm_number1;
    double dm_number2;
};

Operator::Operator()
{
    m_dPtr = new DataPrivate;
}

Operator::~Operator()
{
}

void Operator::setNumberA(double x)
{
    m_dPtr->dm_number1 = x;
}

double Operator::getNumberA()
{
    return m_dPtr->dm_number1;
}

void Operator::setNumberB(double y)
{
    m_dPtr->dm_number2 = y;
}

double Operator::getNumberB()
{
    return m_dPtr->dm_number2;
}
