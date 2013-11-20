#==============================================================================
#Author: Damian Ziobro (ziobro.damian@gmail.com)


cmake_minimum_required(VERSION 2.6)
project(stl_mapKeysDifference)

set(CMAKE_INSTALL_PREFIX /usr)
ADD_DEFINITIONS(-std=c++11)

#source of project
set(SRC
    ${PROJECT_NAME}.cpp
)

#==============================================================================
#compilation and installation project

add_executable(${PROJECT_NAME} ${SRC})
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

#==============================================================================
