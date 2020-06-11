cmake_minimum_required(VERSION 3.16)
project(encrypt)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_TEST ${PROJECT_NAME}_test)
set(PROJECT_SYS_TEST ${PROJECT_NAME}_sys_test)

set(SOURCE_FILES include/encrypt.h src/encrypt.cpp include/BigInteger.h include/keyGenerator.h src/keyGenerator.cpp include/safeRandom.h
        src/safeRandom.cpp include/key.h src/key.cpp src/aes.cpp include/aes.h src/sha.cpp include/sha.h src/authenticate.cpp include/authenticate.h)
set(TEST_FILES test/unitTestMain.cpp test/test_BigInteger.cpp test/test_BigIntegerAlgorithms.cpp test/test_keyGenerator.cpp)

find_package(CURL REQUIRED)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/googletest gtest-build)
include_directories(
        ${PROJECT_SOURCE_DIR}/lib/googletest/googletest
        ${PROJECT_SOURCE_DIR}/lib/googletest/googlemock
        PRIVATE ${CURL_INCLUDE_DIRS}
)
add_library(${PROJECT_NAME} ${SOURCE_FILES})

add_executable(${PROJECT_TEST} ${SOURCE_FILES} ${TEST_FILES})
add_executable(${PROJECT_SYS_TEST} test/systemTestMain.cpp ${SOURCE_FILES})

target_link_libraries(${PROJECT_SYS_TEST} curl)
target_link_libraries(${PROJECT_NAME} curl)
target_link_libraries(${PROJECT_TEST} gtest gtest_main gmock gmock_main curl)
