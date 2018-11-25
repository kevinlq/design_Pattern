#ifndef FACTORYBASE_H
#define FACTORYBASE_H


class OperatorBase;

class FactoryBase
{
public:
    FactoryBase();
    virtual ~FactoryBase();

    virtual OperatorBase *CreateOperate() = 0;
};

#endif // FACTORYBASE_H
