add_library(Ford STATIC Ford.hpp Ford.cpp )

target_include_directories( Ford PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
target_link_libraries(Ford Car)
