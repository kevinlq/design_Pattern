#ifndef FACTORYSUB_H
#define FACTORYSUB_H

#include "FactoryBase.h"

class FactorySub : public FactoryBase
{
public:
    FactorySub();
    virtual ~FactorySub();

    virtual OperatorBase *CreateOperate();
};

#endif // FACTORYSUB_H
