#ifndef CONCREATEFACTORY_H
#define CONCREATEFACTORY_H

#include "Factory.h"
#include "concrete_product.h"

//奔驰
class BenzFactory: public AFactory
{
public:
    virtual ICar* CreateCar ()
    {
        return new BenzCar();
    }

    virtual IBike* CreateBike ()
    {
        return new BenzBike();
    }
};

//宝马
class BmwFactory : public AFactory
{
public:
    virtual ICar* CreateCar ()
    {
        return new BmwCar();
    }

    virtual IBike* CreateBike ()
    {
        return new BmwBike();
    }
};

#endif // CONCREATEFACTORY_H
