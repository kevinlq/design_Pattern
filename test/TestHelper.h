#ifndef TESTHELPER_H
#define TESTHELPER_H

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

#include <qtest.h>

#include <QDebug>
#include <QScopedPointer>
#include <exception>

#include <QFile>
#include <QFileInfo>
#include <QFileInfoList>

#endif // TESTHELPER_H
