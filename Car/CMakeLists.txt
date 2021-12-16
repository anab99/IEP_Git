add_library(Car STATIC Car.hpp Car.cpp )
target_link_libraries(Car Showroom)
target_include_directories( Car PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
