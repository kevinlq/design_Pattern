[Home](../README.md)

## 简单工厂模式

简单工厂模式就是实例化对象的一种方式。

>写了一个简单的demo，出现了一个错误
在多继承中，如果子类的构造函数中没有显示的调用父类的构造函数，
则先调用父类的默认构造函数。即使用继承时，如果父类没有默认构造函数，
则子类的构造函数应当显示的调用父类的构造函数。

以计算器为例

新建一个基础运算类

```C++
struct DataPrivate;

class Operator
{
public:
    Operator();
    virtual ~Operator() = 0;

    void setNumberA(double x);
    double getNumberA();

    void setNumberB(double y);
    double getNumberB();

    double virtual getResult() = 0;

private:
    DataPrivate *m_dPtr;
};
```

主函数，这里使用了工厂进行按需初始化(使用了智能指针)
```C++
#include <QCoreApplication>
#include <QDebug>
#include <QScopedPointer>

#include "simple_factory/operator.h"
#include "simple_factory/operatorfactory.h"

#include "simple_factory/operatoradd.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QScopedPointer<Operator> oper(OperatorFactory::createOperate(1));
    if (oper){
        oper->setNumberA(12);
        oper->setNumberB(4);

        double result = oper->getResult();

        qDebug()<<"result:"<<result;
    }

    return a.exec();
}
```