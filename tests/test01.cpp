#include <libobj-mini/libobj-mini.h>

using namespace std::string_literals;

int main()
{
    ObjMini rdr("cube.obj"s);
    rdr.run();
    return 0;
}
