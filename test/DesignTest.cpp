#include "DesignTest.h"

#include <qtest.h>

#include <QDebug>
#include <QScopedPointer>

#include <exception>

#include "simple_factory/operator.h"
#include "simple_factory/operatorfactory.h"
#include "simple_factory/operatoradd.h"

DesignTest::DesignTest(QObject *parent) : QObject(parent)
{
}

void DesignTest::init()
{
}

void DesignTest::cleanup()
{
}
