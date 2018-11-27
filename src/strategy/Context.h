#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

//创建环境角色
class Context
{
public:
    Context(IStrategy *pStrategy) {m_pStrategy = pStrategy;}

    void Travel()
    {
        if ( m_pStrategy != NULL)
        {
            m_pStrategy->Travel ();
        }
    }

private:
    IStrategy *m_pStrategy;
};

#endif // CONTEXT_H
