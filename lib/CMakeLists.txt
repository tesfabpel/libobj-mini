set(libobj_mini_SOURCE_FILES library.cpp library.h)
add_library(libobj_mini SHARED ${libobj_mini_SOURCE_FILES})

target_include_directories(libobj_mini PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)
