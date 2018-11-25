#include "FactoryAdd.h"
#include "../simple_factory/operatoradd.h"

FactoryAdd::FactoryAdd()
{
}

FactoryAdd::~FactoryAdd()
{
}

OperatorBase *FactoryAdd::CreateOperate()
{
    return new OperatorAdd();
}
