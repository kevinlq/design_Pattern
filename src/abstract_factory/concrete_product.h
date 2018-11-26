#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "Product.h"

/*******************汽车 Start*********************/
//奔驰
class BenzCar : public ICar
{
public:
    virtual string Name()
    {
        return "Benz Car";
    }
};

//宝马
class BmwCar : public ICar
{
public:
    virtual string Name()
    {
        return "Bmw Car";
    }
};

/*******************汽车 End*********************/


/*******************自行车 Start*********************/
//奔驰
class BenzBike : public IBike
{
public:
    virtual string Name()
    {
        return "Benz Bike";
    }
};

//宝马
class BmwBike : public IBike
{
    virtual string Name()
    {
        return "Bmw Bike";
    }
};
/*******************自行车 End*********************/

#endif // CONCRETE_PRODUCT_H
