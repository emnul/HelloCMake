cmake_minimum_required(VERSION 3.16)

option(
  SAY_GOODBYE
  "Should say goodbye before exiting"
  OFF
)

add_executable(GreeterApp src/main.cpp)
target_compile_features(GreeterApp PUBLIC cxx_std_23)
target_link_libraries(GreeterApp GreeterLib)

if(SAY_GOODBYE)
  message(STATUS "Defining SAY_GOODBYE")
  target_compile_definitions(GreeterApp PUBLIC SAY_GOODBYE)
endif()
