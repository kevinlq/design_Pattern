#ifndef DESIGNTEST_H
#define DESIGNTEST_H

#include <QObject>

class DesignTest : public QObject
{
    Q_OBJECT
public:
    explicit DesignTest(QObject *parent = nullptr);

signals:

private Q_SLOTS:
    void init();        //每个测试函数执行前调用
    void cleanup();     //每一个测试函数执行后调用的方法

    //void initTestCase();    //第一个测试函数执行前调用
    //void cleanupTestCase(); //最后一个测试函数执行后调用
};

#endif // DESIGNTEST_H
