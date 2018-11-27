#include <QCoreApplication>

#include <QtTest>

#include "test/TestSimpleFactory.h"
#include "test/TestFactoryMethor.h"
#include "test/TestAbstractFactory.h"
#include "test/TestStrategy.h"

int AssertTest(QObject* obj)
{
    int status = QTest::qExec(obj);

    if (obj != NULL)
    {
        delete obj;
        obj = NULL;
    }

    return status;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int status = 0;
    status = AssertTest( new TestSimpleFactory());
    status = AssertTest( new TestFactoryMethor());
    status = AssertTest( new TestAbstractFactory());
    status = AssertTest( new TestStrategy());

    return status;
}
