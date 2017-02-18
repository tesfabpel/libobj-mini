#include "libobj-mini-priv.h"
#include "public/libobj-mini.h"

ObjMini::ObjMini(std::string f) :
        p(new ObjMiniImpl(f))
{

}

ObjMini::~ObjMini()
{
    delete p;
}

ObjMiniImpl::ObjMiniImpl(std::string f)
{
    this->f = f;
}
