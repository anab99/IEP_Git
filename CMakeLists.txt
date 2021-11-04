
cmake_minimum_required(VERSION 3.16)  # CMake version check
project(main)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_subdirectory( Hyundai )
add_subdirectory( Ford )
add_subdirectory( VW )
add_subdirectory( Car )
add_subdirectory( BMW )
add_executable( main main/main.cpp)

target_link_libraries(main Car)
target_link_libraries(main Ford)
target_link_libraries(main Hyundai)
target_link_libraries(main VW)
target_link_libraries(main BMW)
