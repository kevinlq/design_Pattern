#ifndef TESTFACTORYMETHOR_H
#define TESTFACTORYMETHOR_H

#include <QObject>

class FactoryBase;
class OperatorBase;

class TestFactoryMethor : public QObject
{
    Q_OBJECT
public:
    explicit TestFactoryMethor(QObject *parent = nullptr);

signals:

private Q_SLOTS:

    void cleanup();     //每一个测试函数执行后调用的方法

    void testAddOperator();
    void testSubOperator();
    void testMulOperator();
    void testDivOperator();

private:
    FactoryBase *m_pFactory;
    OperatorBase *m_pOperate;
};

#endif // TESTFACTORYMETHOR_H
