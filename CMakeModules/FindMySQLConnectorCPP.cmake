
find_path(MYSQLCONNECTORCPP_INCLUDE_DIR
  NAMES mysql_connection.h
  PATHS /usr/include /usr/local/include /usr/include/mysql /usr/local/include/mysql
)

find_library(MYSQLCONNECTORCPP_LIBRARY
  NAMES mysqlcppconn
  PATHS /usr/lib /usr/local/lib /usr/lib/x86_64-linux-gnu
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(MySQLConnectorCPP DEFAULT_MSG
  MYSQLCONNECTORCPP_LIBRARY MYSQLCONNECTORCPP_INCLUDE_DIR
)

if(MYSQLCONNECTORCPP_FOUND)
  set(MYSQLCONNECTORCPP_LIBRARIES ${MYSQLCONNECTORCPP_LIBRARY})
  set(MYSQLCONNECTORCPP_INCLUDE_DIRS ${MYSQLCONNECTORCPP_INCLUDE_DIR})
endif()