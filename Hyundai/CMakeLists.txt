add_library(Hyundai STATIC Hyundai.hpp Hyundai.cpp )

target_include_directories( Hyundai PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
target_link_libraries(Hyundai Car)
