cmake_minimum_required(VERSION 3.5)
project(GreenhouseMonitor)

#include_directories(include)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/Greenhouse.cpp
        src/Humidity.cpp
        src/Light.cpp
        src/Pressure.cpp
        src/SoilMoisture.cpp
        src/Temperature.cpp
        src/WifiClient.cpp
        src/MqttClient.cpp
        main.cpp)

add_executable(GreenhouseMonitor ${SOURCE_FILES})

find_package(wiringPi REQUIRED)
include_directories(${WIRINGPI_INCLUDE_DIRS})
target_link_libraries(GreenhouseMonitor ${WIRINGPI_LIBRARIES})

find_package(PahoMqttCpp REQUIRED)
include_directories(${PAHOMQTTCPP_INCLUDE_DIRS})
target_link_libraries(GreenhouseMonitor ${PAHOMQTTCPP_LIBRARIES})

