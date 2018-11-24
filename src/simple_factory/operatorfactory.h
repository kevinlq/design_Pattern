#ifndef OPERATORFACTORY_H
#define OPERATORFACTORY_H

class OperatorBase;

typedef enum enum_OPERATOR{
    OP_ADD = 0,
    OP_SUB,
    OP_MUL,
    OP_DIV
}OPERATOR;

class OperatorFactory
{
public:
    OperatorFactory();
    ~OperatorFactory();

    static OperatorBase * createOperate(OPERATOR op);
};

#endif // OPERATORFACTORY_H
