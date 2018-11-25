#ifndef FACTORYMUL_H
#define FACTORYMUL_H

#include "FactoryBase.h"

class FactoryMul : public FactoryBase
{
public:
    FactoryMul();
    virtual ~FactoryMul();

    virtual OperatorBase *CreateOperate();
};

#endif // FACTORYMUL_H
