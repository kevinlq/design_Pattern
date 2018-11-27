#ifndef CONCRETESTRATEGY_H
#define CONCRETESTRATEGY_H

#include "Strategy.h"

#include <iostream>

//骑自行车
class BikeStrategy : public IStrategy
{
public:
    virtual void Travel () override
    {
        std::cout<< "Travel by bike"<< std::endl;
    }
};

//开车
class CarStrategy : public IStrategy
{
public:
    virtual void Travel () override
    {
        std::cout << "Travel by car"<< std::endl;
    }
};

//座飞机
class AirPlaneStrategy : public IStrategy
{
public:
    virtual void Travel () override
    {
        std::cout << "Travel by airPlane" <<std::endl;
    }
};

#endif // CONCRETESTRATEGY_H
