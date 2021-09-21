cmake_minimum_required(VERSION 3.5.1)
project(c_thread_1)
add_executable(pthread1 pthread_1.c)

set(THREADS_PREFER_PTHREAD_FLAG ON)
target_link_libraries(pthread1 pthread)
# https://stackoverflow.com/questions/49768454/whats-the-differences-between-pthread-and-pthread-options-in-cmake?noredirect=1&lq=1




# support for cross-compilation
#set (CMAKE_C_COMPILER /usr/bin/arm-linux-gnueabi-gcc)
#set (CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabi-g++)
#set (CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
#set (CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
#set (CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
#set (CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)



