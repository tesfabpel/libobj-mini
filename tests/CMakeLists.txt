add_executable(test01 test01.cpp)
target_link_libraries(test01 LINK_PUBLIC obj_mini)

configure_file(cube.obj cube.obj COPYONLY)
