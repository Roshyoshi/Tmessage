

find_package(OpenSSL REQUIRED)
find_package(Protobuf REQUIRED)
find_package(spdlog REQUIRED)
find_package(Threads REQUIRED)


include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${Protobuf_INCLUDE_DIRS}
    ${MYSQLCONNECTORCPP_INCLUDE_DIRS}
    ${OPENSSL_INCLUDE_DIR}
    ${SPDLOG_INCLUDE_DIRS}
)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${CMAKE_CURRENT_SOURCE_DIR}/common/message.proto)

#Server
add_executable(server
    server/server.cpp
    common/utility.cpp
    ${PROTO_SRCS}
)


target_link_libraries(server
    OpenSSL::SSL
    spdlog::spdlog
    ${Protobuf_LIBRARIES}
    Threads::Threads
    ${MYSQLCONNECTORCPP_LIBRARIES}
)

#Client 
add_executable(client
    client/client.cpp
    common/utility.cpp
    ${PROTO_SRCS}
)

target_link_libraries(client
    OpenSSL::SSL
    spdlog::spdlog
    ${Protobuf_LIBRARIES}
    Threads::Threads
)