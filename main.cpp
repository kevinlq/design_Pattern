#include <QCoreApplication>

#include <QtTest>

#include "test/TestSimpleFactory.h"

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

    return status;
}
