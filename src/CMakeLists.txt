find_package(OpenSSL REQUIRED)
find_package(Protobuf REQUIRED)
find_package(spdlog REQUIRED)
find_package(Threads REQUIRED)
find_package(MySQLConnectorCPP REQUIRED)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${Protobuf_INCLUDE_DIRS})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${CMAKE_CURRENT_SOURCE_DIR}/common/message.proto)

#Server
add_executable(
    server/server.cpp
    common/utility.cpp
    ${PROTO_SRCS}
)


target_link_libraries(
    OpenSSL::SSL
    spdlog::spdlog
    ${Protobuf_LIBRARIES}
    Threads::Threads
    ${MYSQLCONNECTORCPP_LIBRARIES}
)

#Client 
add_executable(
    client/client.cpp
    common/utility.cpp
    ${PROTO_SRCS}
)

target_link_libraries(
    OPENSSL::SSL
    spdlog::spdlog
    ${Protobuf_LIBRARIES}
    Threads::Threads
)