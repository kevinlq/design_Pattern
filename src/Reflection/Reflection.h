#ifndef REFLECTION_H
#define REFLECTION_H

#include <string>
#include <map>

typedef void* (*createFun)();

class Reflection
{
public:
    ~Reflection();
    static Reflection *getInstance();

    void registerClass( const std::string &strName, createFun fun);
    void *getClass(const std::string &strName);

private:
    Reflection();

    std::map<std::string, createFun> m_mapFunInfo;
};

#endif // REFLECTION_H
