#include "FactoryDiv.h"

#include "operatordiv.h"

FactoryDiv::FactoryDiv()
{
}

FactoryDiv::~FactoryDiv()
{
}

OperatorBase *FactoryDiv::CreateOperate()
{
    return new OperatorDiv();
}
