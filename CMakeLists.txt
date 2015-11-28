cmake_minimum_required(VERSION 3.3)
project(SampleJSONCpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu11")

include_directories(json)

set(SOURCE_FILES main.cpp jsoncpp.cpp IO.cpp IO.h FlightScenarioIO.cpp FlightScenarioIO.h SimulationFlightsIO.cpp SimulationFlightsIO.h)
add_executable(SampleJSONCpp ${SOURCE_FILES})