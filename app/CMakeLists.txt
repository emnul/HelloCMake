cmake_minimum_required(VERSION 3.16)

option(
  SAY_GOODBYE
  "Should say goodbye before exiting"
  OFF
)

set(GREETER_SOURCES src/main.cpp)

if(SAY_GOODBYE)
  message(STATUS "Adding goodbye.cpp to GREETER_SOURCES")
  list(APPEND GREETER_SOURCES src/goodbye.cpp)

  list(LENGTH GREETER_SOURCES GREETER_SOURCE_COUNT)
  message(STATUS "GREETER_SOURCES now has ${GREETER_SOURCE_COUNT} files")
endif()

add_executable(GreeterApp ${GREETER_SOURCES})
target_compile_features(GreeterApp PUBLIC cxx_std_23)
target_link_libraries(GreeterApp GreeterLib)

if(SAY_GOODBYE)
  message(STATUS "Defining SAY_GOODBYE")
  target_compile_definitions(GreeterApp PUBLIC SAY_GOODBYE)
endif()
