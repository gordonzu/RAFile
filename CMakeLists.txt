project(RAFile)
cmake_minimum_required(VERSION 2.6)

include_directories("$ENV{GMOCK_HOME}/include" "$ENV{GMOCK_HOME}/gtest/include" 
                    "$ENV{HOME}/test" 
                    "$ENV{HOME}/src/cpp/RAFile/src/database/include" 
                    "$ENV{HOME}/src/cpp/RAFile/src/personnel/include" 
                    "$ENV{HOME}/src/cpp/RAFile/src/student/include") 
link_directories("$ENV{GMOCK_HOME}/mybuild" "$ENV{GMOCK_HOME}/gtest/mybuild")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wno-write-strings -O0")

set(sources
    test/mock_writer.cpp
    src/personnel/cpp/abstract_writer.cpp
    src/personnel/cpp/personnel.cpp
    main.cpp
    test/random_aftest.cpp
  )

add_executable(raftest ${sources})
target_link_libraries(raftest gmock)
target_link_libraries(raftest gtest)
target_link_libraries(raftest pthread)

add_custom_command(TARGET raftest 
                 POST_BUILD
                 COMMAND "make")

add_custom_command(TARGET raftest
                 POST_BUILD
#                COMMAND valgrind --tool=memcheck --leak-check=yes ./xyenv)
                 COMMAND "raftest")

