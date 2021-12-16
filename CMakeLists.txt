
cmake_minimum_required(VERSION 3.16)  # CMake version check
project(main)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_subdirectory( Hyundai )
add_subdirectory( Ford )
add_subdirectory( VW )
add_subdirectory( Car )
add_subdirectory( BMW )
add_subdirectory( Lock )
add_subdirectory( Showroom )
add_subdirectory( Owner )
add_executable( main main/main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


target_link_libraries(main Car)
target_link_libraries(main Ford)
target_link_libraries(main Hyundai)
target_link_libraries(main VW)
target_link_libraries(main BMW)
target_link_libraries(main Lock)
target_link_libraries(main Showroom)
target_link_libraries(main Owner)
