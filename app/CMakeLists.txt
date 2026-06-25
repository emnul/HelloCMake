cmake_minimum_required(VERSION 3.16)

add_executable(GreeterApp src/main.cpp)
target_compile_features(GreeterApp PUBLIC cxx_std_23)
target_link_libraries(GreeterApp GreeterLib)
