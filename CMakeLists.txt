cmake_minimum_required(VERSION 3.16)
project(meme-factory-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(memefactoryx
    src/main.cpp
    src/caption.cpp
    src/image.cpp
    src/trends.cpp
)

target_include_directories(memefactoryx PRIVATE include)

if(WIN32)
    target_link_libraries(memefactoryx PRIVATE userenv)
endif()
