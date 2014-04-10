#==============================================================================
#Author: Damian Ziobro (ziobro.damian@gmail.com)


cmake_minimum_required(VERSION 2.6)
project(multithreading_passParamsToThreadFunction)

set(CMAKE_INSTALL_PREFIX /usr)
set(CMAKE_CXX_FLAGS "-std=c++11 -pthread ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")

#source of project
set(SRC
    ${PROJECT_NAME}.cpp
)

#==============================================================================
#compilation and installation project

target_link_libraries("pthread")

add_executable(${PROJECT_NAME} ${SRC})
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

#==============================================================================
