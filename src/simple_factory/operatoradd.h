#ifndef OPERATORADD_H
#define OPERATORADD_H

#include "operator.h"

class OperatorAdd : public OperatorBase
{
public:
    OperatorAdd();
    ~OperatorAdd();

    double virtual getResult();
};

#endif // OPERATORADD_H
