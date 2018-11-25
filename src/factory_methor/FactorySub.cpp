#include "FactorySub.h"

#include "simple_factory/operatorsub.h"

FactorySub::FactorySub()
{

}

FactorySub::~FactorySub()
{
}

OperatorBase *FactorySub::CreateOperate()
{
    return new OperatorSub();
}
