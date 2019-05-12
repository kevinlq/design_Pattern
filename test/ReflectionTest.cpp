#include "ReflectionTest.h"

#include "Reflection/Reflection.h"

void *createLTest()
{
    LTest *pTest = new LTest;

    return pTest;
}

ReflectionTest::ReflectionTest(QObject *parent) : QObject(parent)
{

}

void ReflectionTest::testCreate()
{
    /*! 注册*/
    Reflection::getInstance ()->registerClass ("LTest",createLTest);

    /*! 根据类名或者类对象*/
    LTest *pTest = (LTest*)Reflection::getInstance ()->getClass ("LTest");

    if (pTest == NULL)
    {
        qDebug()<<"######getClass Error!";
    }

    pTest->printFun ();

    delete pTest;
}


