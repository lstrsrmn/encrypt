cmake_minimum_required(VERSION 3.16)
project(encrypt)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(PROJECT_TEST ${PROJECT_NAME}_test)
set(PROJECT_SYS_TEST ${PROJECT_NAME}_sys_test)

set(SOURCE_FILES include/authenticate.h src/authenticate.cpp include/encrypt.h src/encrypt.cpp include/BigInteger.h include/keyGenerator.h src/keyGenerator.cpp include/safeRandom.h
        src/safeRandom.cpp include/key.h src/key.cpp src/aes.cpp include/aes.h src/sha.cpp include/sha.h)
set(TEST_FILES test/unitTestMain.cpp test/test_BigInteger.cpp test/test_BigIntegerAlgorithms.cpp test/test_keyGenerator.cpp)

set(JSON_INCLUDE_DIRS "C:/Libraries/json/include")

set(CURL_LIBRARY "C:/Libraries/curl/libcurl.lib")
set(CURL_INCLUDE_DIRS "C:/Libraries/curl/include")
include_directories(
    ${CURL_INCLUDE_DIRS}
)

if (WIN32)

include_directories(
    ${JSON_INCLUDE_DIRS}
)

else ()

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/googletest gtest-build)
include_directories(
        ${PROJECT_SOURCE_DIR}/lib/googletest/googletest
        ${PROJECT_SOURCE_DIR}/lib/googletest/googlemock
)

endif()

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE include)

add_executable(${PROJECT_TEST} ${SOURCE_FILES} ${TEST_FILES})
add_executable(${PROJECT_SYS_TEST} test/systemTestMain.cpp ${SOURCE_FILES})


target_link_libraries(${PROJECT_NAME} INTERFACE ${CURL_LIBRARY} Normaliz Ws2_32 Wldap32 Crypt32 advapi32)