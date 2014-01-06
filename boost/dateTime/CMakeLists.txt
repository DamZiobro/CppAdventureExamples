#==============================================================================
#Author: Damian Ziobro (ziobro.damian@gmail.com)


cmake_minimum_required(VERSION 2.6)
project(boost_dateTime)

set(CMAKE_INSTALL_PREFIX /usr)
ADD_DEFINITIONS(-std=c++11)

#source of project
set(SRC
    ${PROJECT_NAME}.cpp
)

#set up boost libraries
set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.49.0 COMPONENTS date_time REQUIRED) 

#==============================================================================
#compilation and installation project

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(${PROJECT_NAME} ${SRC})
    target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
    install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
endif()

#==============================================================================
