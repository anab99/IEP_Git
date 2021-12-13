add_library(Showroom STATIC Showroom.hpp Showroom.cpp )
target_link_libraries(Showroom Car)
target_include_directories( Showroom PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )