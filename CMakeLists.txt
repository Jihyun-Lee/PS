cmake_minimum_required(VERSION 3.10)
set(PACKAGE_NAME easy_cpp_project)
# 프로젝트 이름과 버전
project(${PACKAGE_NAME} VERSION 1.0 LANGUAGES CXX)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 실행 파일 생성
#add_executable(${PACKAGE_NAME}_MAIN src/main.cpp)
#add_executable(${PACKAGE_NAME}_MAIN src/onetwo.cpp)
#add_executable(${PACKAGE_NAME}_MAIN src/bubble.cpp)
#add_executable(${PACKAGE_NAME}_MAIN src/qs.cpp)
add_executable(${PACKAGE_NAME}_MAIN src/mergesort.cpp)

target_compile_options(${PACKAGE_NAME}_MAIN PRIVATE -Wall -Wextra -Wpedantic -Werror)
