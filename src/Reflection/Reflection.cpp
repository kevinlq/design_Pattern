#include "Reflection.h"

Reflection::~Reflection()
{
}

Reflection *Reflection::getInstance()
{
    static Reflection _instance;
    return &_instance;
}

void Reflection::registerClass(const std::string &strName, createFun fun)
{
    m_mapFunInfo[strName] = fun;
}

void *Reflection::getClass(const std::string &strName)
{
    std::map<std::string, createFun>::iterator it = m_mapFunInfo.find(strName);

    if (it == m_mapFunInfo.end ())
    {
        return NULL;
    }

    createFun fun = it->second;

    return fun();
}

Reflection::Reflection()
{

}
