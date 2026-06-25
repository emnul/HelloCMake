cmake_minimum_required(VERSION 3.17)
project(HelloCMake)

# Create a library target named "GreeterLib"
add_library(HelloCMakeLib src/HelloCMake.cpp)

# Specify C++ Standard
target_compile_features(HelloCMakeLib PUBLIC cxx_std_23)

# Tell our HelloCMakeLib library where its public headers are
target_include_directories(HelloCMakeLib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Add our executable target like before
add_executable(HelloCMakeApp2 src/main.cpp)
target_compile_features(HelloCMakeApp2 PUBLIC cxx_std_23)
target_link_libraries(HelloCMakeApp2 HelloCMakeLib)

# Link the "GreeterLib" library to our executable
#target_link_libraries(HelloCMakeApp HelloCMakeLib)
