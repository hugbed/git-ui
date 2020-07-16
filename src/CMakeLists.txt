cmake_minimum_required(VERSION 3.16)

project(GitCore)

# FindPackage(libgit2)

file(GLOB SRC_FILES
    ${PROJECT_SOURCE_DIR}/*.h
    ${PROJECT_SOURCE_DIR}/*.cpp) 

include_directories("../deps/libgit2/include")

add_executable(${PROJECT_NAME} ${SRC_FILES})

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

target_link_libraries(${PROJECT_NAME} git2)
