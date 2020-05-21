cmake_minimum_required(VERSION 3.16)
project(encrypt)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_TEST ${PROJECT_NAME}_test)
set(PROJECT_SYS_TEST ${PROJECT_NAME}_sys_test)

set(SOURCE_FILES include/encrypt.h src/encrypt.cpp include/BigInteger.h include/keyGenerator.h src/keyGenerator.cpp include/safeRandom.h
        src/safeRandom.cpp include/key.h src/key.cpp)
set(TEST_FILES test/unitTestMain.cpp test/test_BigInteger.cpp test/test_BigIntegerAlgorithms.cpp test/test_keyGenerator.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/googletest gtest-build)
include_directories(
        ${PROJECT_SOURCE_DIR}/lib/googletest/googletest
        ${PROJECT_SOURCE_DIR}/lib/googletest/googlemock
)
add_library(${PROJECT_NAME} ${SOURCE_FILES})

add_executable(${PROJECT_TEST} ${SOURCE_FILES} ${TEST_FILES})
add_executable(${PROJECT_SYS_TEST} test/systemTestMain.cpp ${SOURCE_FILES})

target_link_libraries(${PROJECT_TEST} gtest gtest_main gmock gmock_main)
