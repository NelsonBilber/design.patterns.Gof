project(Facade_cpp)
cmake_minimum_required(VERSION 2.8)

#enable c++11 c++14 features
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

#enable threads
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
find_package(Threads REQUIRED)
if(CMAKE_USE_PTHREADS_INIT)
    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-pthread")
else()
    message (STATUS "Cannot enable multithreading.")
endif()

#include all headers files from current dir
file(GLOB HEADER_FILES   "*.hpp")

#include all cpp files from current dir
aux_source_directory(. SRC_LIST)

#set up executable
add_executable(${PROJECT_NAME} ${SRC_LIST} ${HEADER_FILES})

#link necessary libs
target_link_libraries( ${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT} )
