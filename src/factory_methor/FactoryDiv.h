#ifndef FACTORYDIV_H
#define FACTORYDIV_H

#include "FactoryBase.h"

class FactoryDiv : public FactoryBase
{
public:
    FactoryDiv();
    virtual ~FactoryDiv();

    virtual OperatorBase *CreateOperate();
};

#endif // FACTORYDIV_H
