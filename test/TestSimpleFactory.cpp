#include "TestSimpleFactory.h"

#include <qtest.h>

#include <QDebug>
#include <QScopedPointer>

#include <exception>

#include "simple_factory/operator.h"
#include "simple_factory/operatorfactory.h"
#include "simple_factory/operatoradd.h"

TestSimpleFactory::TestSimpleFactory(QObject *parent) : QObject(parent)
{
}

void TestSimpleFactory::testAddOperator()
{
    OperatorBase *pOperAdd = OperatorFactory::createOperate(OP_ADD);
    QVERIFY2(pOperAdd != Q_NULLPTR, "oper is null");
    pOperAdd->setNumberA(12);
    pOperAdd->setNumberB(4);

    double result = pOperAdd->getResult();
    qDebug()<<"and result:"<<result;

    delete pOperAdd;
}

void TestSimpleFactory::testSubOperator()
{
    OperatorBase *pOperSub = OperatorFactory::createOperate(OP_SUB);
    QVERIFY2(pOperSub != Q_NULLPTR, "oper is null");
    pOperSub->setNumberA(12);
    pOperSub->setNumberB(4);

    double result = pOperSub->getResult();
    qDebug()<<"sub result:"<<result;

    delete pOperSub;
}

void TestSimpleFactory::testMulOperator()
{
    OperatorBase *pOperMul = OperatorFactory::createOperate(OP_MUL);
    QVERIFY2(pOperMul != Q_NULLPTR, "oper is null");
    pOperMul->setNumberA(12);
    pOperMul->setNumberB(4);

    double result = pOperMul->getResult();
    qDebug()<<"mul result:"<<result;

    delete pOperMul;
}

void TestSimpleFactory::testDivOperator()
{
    OperatorBase *pOperDiv = OperatorFactory::createOperate(OP_DIV);
    QVERIFY2(pOperDiv != Q_NULLPTR, "oper is null");
    pOperDiv->setNumberA(12);
    pOperDiv->setNumberB(4);

    double result = pOperDiv->getResult();
    qDebug()<<"div result:"<<result;

    delete pOperDiv;
}
