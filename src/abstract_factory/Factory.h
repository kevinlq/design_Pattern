#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"

//抽象工厂
class AFactory
{
public:
    AFactory();
    virtual ~AFactory();
public:
    enum FACTORY_TYPE
    {
      BENZ_FACTORY = 0,
      BMW_FACTORY
    };

    virtual ICar* CreateCar() = 0;
    virtual IBike* CreateBike() = 0;
    static AFactory* CreateFactory(FACTORY_TYPE eType);
};

#endif // FACTORY_H
