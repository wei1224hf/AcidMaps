CMAKE_MINIMUM_REQUIRED (VERSION 2.8) 
PROJECT (ACID_MAPS_JNI) 

FIND_PACKAGE(JNI REQUIRED)
INCLUDE_DIRECTORIES(${JNI_INCLUDE_DIRS})

FILE(GLOB_RECURSE sources ../src/*.cc)
ADD_LIBRARY (acid-maps-jni SHARED JCAdapter.cc ${sources})

SET(CMAKE_BUILD_TYPE Release)

