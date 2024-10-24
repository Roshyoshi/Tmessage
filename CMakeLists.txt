cmake_minimum_required(VERSION 3.10)
project(Tmessage)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules")


find_package(OpenSSL REQUIRED)
find_package(Protobuf REQUIRED)
find_package(spdlog REQUIRED)
find_package(Threads REQUIRED)
find_package(MySQLConnectorCPP REQUIRED)


# Include all subdirectories 
add_subdirectory(src)
add_subdirectory(test)
