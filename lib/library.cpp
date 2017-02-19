#include "libobj-mini-priv.h"
#include "public/libobj-mini/libobj-mini.h"

#include <iostream>
#include <fstream>
#include <sstream>

ObjMini::ObjMini(std::string f) :
        p(new ObjMiniImpl(f))
{

}

ObjMini::~ObjMini()
{
    delete p;
}

void ObjMini::run()
{
	p->run();
}

// ---

ObjMiniImpl::ObjMiniImpl(std::string f)
{
    this->f = f;
	this->c_loc = newlocale(LC_ALL, "C", 0);
}

ObjMiniImpl::~ObjMiniImpl()
{
	freelocale(this->c_loc);
}

boost::optional<v3d> ObjMiniImpl::parseVertex(const std::string &l)
{
	boost::optional<v3d> r;
	
	locale_t oldloc = uselocale(this->c_loc);
	if(oldloc == 0)
		return r;
	
	v3d v;
	int res = sscanf(l.c_str(), "v %lf %lf %lf", &v.x, &v.y, &v.z);
	if(res <= 0)
		return r;
	
	uselocale(oldloc);
	
	return v;
}

void ObjMiniImpl::run()
{
	using namespace std;
	ifstream fs;
	
	std::vector<v3d> verts;
	
	fs.open(this->f);
	if(!fs.is_open())
		return;
	
	string l;
	while(getline(fs, l))
	{
		if(l.length() == 0)
			continue;
		
		boost::optional<v3d> v;
		
		char x = l[0];
		switch(x)
		{
			case 'v':
				v = parseVertex(l);
				if(v)
				{
					verts.push_back(*v);
				}
				break;
			
			default:
				continue;
		}
	}
}


