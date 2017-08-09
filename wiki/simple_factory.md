[Home](../README.md)

## 简单工厂模式

简单工厂模式就是实例化对象的一种方式。

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