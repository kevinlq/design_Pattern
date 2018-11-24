#ifndef TESTSIMPLEFACTORY_H
#define TESTSIMPLEFACTORY_H

#include <QObject>

class TestSimpleFactory : public QObject
{
    Q_OBJECT
public:
    explicit TestSimpleFactory(QObject *parent = nullptr);

signals:

private Q_SLOTS:

    void testAddOperator();
    void testSubOperator();
    void testMulOperator();
    void testDivOperator();
};

#endif // TESTSIMPLEFACTORY_H
