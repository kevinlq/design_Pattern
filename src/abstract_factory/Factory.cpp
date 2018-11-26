#include "Factory.h"

#include "ConCreateFactory.h"

AFactory::AFactory()
{
}

AFactory::~AFactory()
{
}

AFactory *AFactory::CreateFactory(AFactory::FACTORY_TYPE eType)
{
    AFactory *pFactory = NULL;

    switch (eType) {
    case FACTORY_TYPE::BENZ_FACTORY:
        pFactory = new BenzFactory();
        break;
    case FACTORY_TYPE::BMW_FACTORY:
        pFactory = new BmwFactory();
        break;
    default:
        break;
    }

    return pFactory;
}
