#include "TestStrategy.h"

#include "TestHelper.h"

#include "Context.h"
#include "ConcreteStrategy.h"

TestStrategy::TestStrategy(QObject *parent) : QObject(parent)
{
    m_pStrategy = NULL;
    m_pContext = NULL;
}

void TestStrategy::cleanup()
{
    SAFE_DELETE(m_pStrategy);
    SAFE_DELETE(m_pContext);
}

void TestStrategy::testBikeTravel()
{
    m_pStrategy = new BikeStrategy();
    QVERIFY2(m_pStrategy != NULL, "m_pStrategy is null");

    m_pContext = new Context(m_pStrategy);
    QVERIFY2(m_pContext != NULL, "m_pContext is null");

    m_pContext->Travel ();
}

void TestStrategy::testCarTravel()
{
    m_pStrategy = new CarStrategy();
    QVERIFY2(m_pStrategy != NULL, "m_pStrategy is null");

    m_pContext = new Context(m_pStrategy);
    QVERIFY2(m_pContext != NULL, "m_pContext is null");

    m_pContext->Travel ();
}

void TestStrategy::testAirplaneTravel()
{
    m_pStrategy = new AirPlaneStrategy();
    QVERIFY2(m_pStrategy != NULL, "m_pStrategy is null");

    m_pContext = new Context(m_pStrategy);
    QVERIFY2(m_pContext != NULL, "m_pContext is null");

    m_pContext->Travel ();
}
