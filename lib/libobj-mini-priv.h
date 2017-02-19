#ifndef LIBOBJ_MINI_LIBOBJ_MINI_PRIV_H_H
#define LIBOBJ_MINI_LIBOBJ_MINI_PRIV_H_H

#include "public/libobj-mini/ds.h"

#include <string>
#include <vector>
#include <locale.h>
#include <boost/optional.hpp>

class ObjMiniImpl
{
public:
    explicit ObjMiniImpl(std::string f);
	~ObjMiniImpl();
	
	void run();

private:
    std::string f;
	locale_t c_loc;
	
	boost::optional<v3d> parseVertex(const std::string &l);
};

#endif //LIBOBJ_MINI_LIBOBJ_MINI_PRIV_H_H
