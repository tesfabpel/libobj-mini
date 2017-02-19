set(libobj_mini_SOURCE_FILES library.cpp)
add_library(obj_mini SHARED ${libobj_mini_SOURCE_FILES})

target_include_directories(obj_mini PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)
