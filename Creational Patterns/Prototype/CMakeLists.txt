project(Prototype)
cmake_minimum_required(VERSION 2.8)

#enable c++11 features
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

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
