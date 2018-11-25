#include "TestSimpleFactory.h"

#include "TestHelper.h"

#include "simple_factory/operator.h"
#include "simple_factory/operatorfactory.h"
#include "simple_factory/operatoradd.h"

TestSimpleFactory::TestSimpleFactory(QObject *parent) : QObject(parent)
{
    m_pOperate = NULL;
}

void TestSimpleFactory::cleanup()
{
    SAFE_DELETE(m_pOperate);
}

void TestSimpleFactory::testAddOperator()
{
    m_pOperate = OperatorFactory::createOperate(OP_ADD);
    QVERIFY2(m_pOperate != Q_NULLPTR, "oper is null");
    m_pOperate->setNumberA(12);
    m_pOperate->setNumberB(4);

    double result = m_pOperate->getResult();
    qDebug()<<"and result:"<<result;
}

void TestSimpleFactory::testSubOperator()
{
    m_pOperate = OperatorFactory::createOperate(OP_SUB);
    QVERIFY2(m_pOperate != Q_NULLPTR, "oper is null");
    m_pOperate->setNumberA(12);
    m_pOperate->setNumberB(4);

    double result = m_pOperate->getResult();
    qDebug()<<"sub result:"<<result;
}

void TestSimpleFactory::testMulOperator()
{
    m_pOperate = OperatorFactory::createOperate(OP_MUL);
    QVERIFY2(m_pOperate != Q_NULLPTR, "oper is null");
    m_pOperate->setNumberA(12);
    m_pOperate->setNumberB(4);

    double result = m_pOperate->getResult();
    qDebug()<<"mul result:"<<result;
}

void TestSimpleFactory::testDivOperator()
{
    m_pOperate = OperatorFactory::createOperate(OP_DIV);
    QVERIFY2(m_pOperate != Q_NULLPTR, "oper is null");
    m_pOperate->setNumberA(12);
    m_pOperate->setNumberB(4);

    double result = m_pOperate->getResult();
    qDebug()<<"div result:"<<result;
}
