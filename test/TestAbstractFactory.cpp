#include "TestAbstractFactory.h"

#include "TestHelper.h"

#include "Product.h"
#include "Factory.h"

using namespace std;

TestAbstractFactory::TestAbstractFactory(QObject *parent) : QObject(parent)
{
    m_pFactory = NULL;
    m_pCar = NULL;
    m_pBike = NULL;
}

void TestAbstractFactory::cleanup()
{
    SAFE_DELETE(m_pFactory);
    SAFE_DELETE(m_pCar);
    SAFE_DELETE(m_pBike);
}

void TestAbstractFactory::testBenz()
{
    m_pFactory = AFactory::CreateFactory (AFactory::FACTORY_TYPE::BENZ_FACTORY);
    QVERIFY2( m_pFactory != NULL, "m_pFactory is null");

    m_pCar = m_pFactory->CreateCar ();
    QVERIFY2( m_pCar != NULL, "m_pCar is null");

    m_pBike = m_pFactory->CreateBike ();
    QVERIFY2( m_pBike != NULL, "m_pBike is null");

    qDebug()<<"Benz factory-Car:"<<m_pCar->Name ().data();
    qDebug()<<"Benz factory-Bike:"<<m_pBike->Name ().data ();
}

void TestAbstractFactory::testBmw()
{
    m_pFactory = AFactory::CreateFactory (AFactory::FACTORY_TYPE::BMW_FACTORY);
    QVERIFY2( m_pFactory != NULL, "m_pFactory is null");

    m_pCar = m_pFactory->CreateCar ();
    QVERIFY2( m_pCar != NULL, "m_pCar is null");

    m_pBike = m_pFactory->CreateBike ();
    QVERIFY2( m_pBike != NULL, "m_pBike is null");

    qDebug()<<"Bmw factory-Car:"<<m_pCar->Name ().data ();
    qDebug()<<"Bmw factory-Bike:"<<m_pBike->Name ().data ();
}
