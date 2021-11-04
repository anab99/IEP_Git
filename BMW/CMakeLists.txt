add_library(BMW STATIC BMW.hpp BMW.cpp )

target_include_directories( BMW PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
target_link_libraries(BMW Car)
