add_library(VW STATIC VW.hpp VW.cpp )

target_include_directories( VW PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
target_link_libraries(VW Car)
