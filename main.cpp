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
