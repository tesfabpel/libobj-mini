#ifndef LIBOBJ_MINI_LIBOBJ_MINI_H
#define LIBOBJ_MINI_LIBOBJ_MINI_H

#include <string>
#include <memory>

#include "ds.h"

class ObjMiniImpl;

class ObjMini
{
public:
    explicit ObjMini(std::string f);
    ~ObjMini();
	
	void run();

private:
    ObjMiniImpl *p;
};

#endif //LIBOBJ_MINI_LIBOBJ_MINI_H_H
