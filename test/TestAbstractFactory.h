#ifndef TESTABSTRACTFACTORY_H
#define TESTABSTRACTFACTORY_H

#include <QObject>


class AFactory;
class ICar;
class IBike;

class TestAbstractFactory : public QObject
{
    Q_OBJECT
public:
    explicit TestAbstractFactory(QObject *parent = nullptr);

signals:

private Q_SLOTS:

    void cleanup();

    void testBenz();

    void testBmw();

private:
    AFactory *m_pFactory;
    ICar    *m_pCar;
    IBike   *m_pBike;
};

#endif // TESTABSTRACTFACTORY_H
