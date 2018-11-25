#include "TestFactoryMethor.h"

#include "TestHelper.h"

#include "operator.h"
#include "FactoryAdd.h"
#include "FactorySub.h"
#include "FactoryMul.h"
#include "FactoryDiv.h"

TestFactoryMethor::TestFactoryMethor(QObject *parent) : QObject(parent)
{
    m_pFactory = NULL;
    m_pOperate = NULL;
}

void TestFactoryMethor::cleanup()
{
    //清除创建的工厂和对象
    SAFE_DELETE(m_pFactory);
    SAFE_DELETE(m_pOperate);
}

void TestFactoryMethor::testAddOperator()
{
    m_pFactory = new FactoryAdd();
    QVERIFY2(m_pFactory != NULL, "pFactory is null");

    m_pOperate = m_pFactory->CreateOperate ();
    QVERIFY2(m_pOperate != NULL, "pOpera is null");

    m_pOperate->setNumberA (6);
    m_pOperate->setNumberB (3);

    double dResult = m_pOperate->getResult ();

    qDebug()<<"add result:"<<dResult;

    QVERIFY2( dResult == 9, "result is error!");
}

void TestFactoryMethor::testSubOperator()
{
    m_pFactory = new FactorySub();
    QVERIFY2(m_pFactory != NULL, "pFactory is null");

    m_pOperate = m_pFactory->CreateOperate ();
    QVERIFY2(m_pOperate != NULL, "pOpera is null");

    m_pOperate->setNumberA (6);
    m_pOperate->setNumberB (3);

    double dResult = m_pOperate->getResult ();

    qDebug()<<"sub result:"<<dResult;

    QVERIFY2( dResult == 3, "result is error!");
}

void TestFactoryMethor::testMulOperator()
{
    m_pFactory= new FactoryMul();
    QVERIFY2(m_pFactory != NULL, "pFactory is null");

    m_pOperate= m_pFactory->CreateOperate ();
    QVERIFY2(m_pOperate != NULL, "pOpera is null");

    m_pOperate->setNumberA (6);
    m_pOperate->setNumberB (3);

    double dResult = m_pOperate->getResult ();

    qDebug()<<"mul result:"<<dResult;

    QVERIFY2( dResult == 18, "result is error!");
}

void TestFactoryMethor::testDivOperator()
{
    m_pFactory = new FactoryDiv();
    QVERIFY2(m_pFactory != NULL, "pFactory is null");

    m_pOperate= m_pFactory->CreateOperate ();
    QVERIFY2(m_pOperate != NULL, "pOpera is null");

    m_pOperate->setNumberA (6);
    m_pOperate->setNumberB (3);

    double dResult = m_pOperate->getResult ();

    qDebug()<<"div result:"<<dResult;

    QVERIFY2( dResult == 2, "result is error!");
}
