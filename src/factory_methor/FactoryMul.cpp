#include "FactoryMul.h"

#include "operatormul.h"

FactoryMul::FactoryMul()
{
}

FactoryMul::~FactoryMul()
{
}

OperatorBase *FactoryMul::CreateOperate()
{
    return new OperatorMul();
}
