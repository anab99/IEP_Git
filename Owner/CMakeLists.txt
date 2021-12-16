add_library( Owner STATIC Owner.hpp Owner.cpp )
target_link_libraries(Owner Car)
target_include_directories( Owner PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
