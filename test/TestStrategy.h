#ifndef TESTSTRATEGY_H
#define TESTSTRATEGY_H

#include <QObject>

class IStrategy;
class Context;

class TestStrategy : public QObject
{
    Q_OBJECT
public:
    explicit TestStrategy(QObject *parent = nullptr);

signals:

private Q_SLOTS:
    void cleanup();

    void testBikeTravel();
    void testCarTravel();
    void testAirplaneTravel();

private:
    IStrategy *m_pStrategy;
    Context   *m_pContext;
};

#endif // TESTSTRATEGY_H
