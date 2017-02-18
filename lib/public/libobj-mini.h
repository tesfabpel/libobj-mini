#ifndef LIBOBJ_MINI_LIBOBJ_MINI_H
#define LIBOBJ_MINI_LIBOBJ_MINI_H

#include <string>
#include <memory>

class ObjMiniImpl;

class ObjMini
{
public:
    explicit ObjMini(std::string f);
    ~ObjMini();

private:
    ObjMiniImpl *p;
};

#endif //LIBOBJ_MINI_LIBOBJ_MINI_H_H
