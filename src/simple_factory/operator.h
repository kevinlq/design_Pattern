#ifndef OPERATOR_H
#define OPERATOR_H

struct DataPrivate;

class OperatorBase
{
public:
    OperatorBase();
    virtual ~OperatorBase() = 0;

    void setNumberA(double x);
    double getNumberA();

    void setNumberB(double y);
    double getNumberB();

    double virtual getResult() = 0;

private:
    DataPrivate *m_dPtr;
};

#endif // OPERATOR_H
