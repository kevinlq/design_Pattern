#ifndef OPERATORADD_H
#define OPERATORADD_H

#include "operator.h"

class OperatorAdd : public Operator
{
public:
    OperatorAdd();
    ~OperatorAdd();

    double getResult() override;
};

#endif // OPERATORADD_H
