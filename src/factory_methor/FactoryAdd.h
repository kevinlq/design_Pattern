#ifndef FACTORYADD_H
#define FACTORYADD_H

#include "FactoryBase.h"

class FactoryAdd : public FactoryBase
{
public:
    FactoryAdd();
    virtual ~FactoryAdd();

    virtual OperatorBase *CreateOperate();
};

#endif // FACTORYADD_H
