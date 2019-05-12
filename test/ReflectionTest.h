#ifndef REFLECTIONTEST_H
#define REFLECTIONTEST_H

#include <QObject>
#include <QDebug>

class LTest
{
public:
    LTest() { qDebug()<<" call test Constructor fun....";}
    ~LTest() {qDebug()<<" cal test Destructor fun...."; }

    void printFun(){ qDebug()<<"cals test printFun...";}
};

void *createLTest();

class ReflectionTest : public QObject
{
    Q_OBJECT
public:
    explicit ReflectionTest(QObject *parent = nullptr);

private Q_SLOTS:
    void testCreate();
};

#endif // REFLECTIONTEST_H
