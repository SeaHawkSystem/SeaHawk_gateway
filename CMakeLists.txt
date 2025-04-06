cmake_minimum_required(VERSION 3.15)
project(SeaHawk_gateway)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 소스 파일 재귀적으로 다 포함
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
)

# 실행 파일 생성
add_executable(SeaHawk_gateway ${SOURCES})

# Windows용 라이브러리 추가
if (WIN32)
    target_link_libraries(SeaHawk_gateway ws2_32)
endif()
