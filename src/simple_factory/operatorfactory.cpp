#include "operatorfactory.h"

#include "operatoradd.h"
#include "operatorsub.h"
#include "operatormul.h"
#include "operatordiv.h"

OperatorFactory::OperatorFactory()
{

}

OperatorFactory::~OperatorFactory()
{
}

Operator *OperatorFactory::createOperate(unsigned char op)
{
    Operator *oper = nullptr;

    switch (op)
    {
    case OP_ADD:
        oper = new OperatorAdd;
        break;
    case OP_SUB:
        oper = new OperatorSub;
        break;
    case OP_MUL:
        oper = new OperatorMul;
        break;
    case OP_DIV:
        oper = new OperatorDiv;
        break;
    default:
        oper = nullptr;
    }
    return oper;
}
