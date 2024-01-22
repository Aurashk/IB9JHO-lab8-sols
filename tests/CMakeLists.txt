# expose project root directory to source code so it can find the files
add_definitions(-DPROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}")

set(SRC_FILES ${CMAKE_SOURCE_DIR}/src/Asset.cpp ${CMAKE_SOURCE_DIR}/src/Market.cpp ${CMAKE_SOURCE_DIR}/src/MarketMaker.cpp ${CMAKE_SOURCE_DIR}/src/Trader.cpp)

add_executable(test_ex1 ${SRC_FILES} test_ex1.cpp)
target_include_directories(test_ex1 PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(test_ex2 ${SRC_FILES} test_ex2.cpp)
target_include_directories(test_ex2 PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(test_ex3 ${SRC_FILES} test_ex3.cpp)
target_include_directories(test_ex3 PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(test_ex4 ${SRC_FILES} test_ex4.cpp)
target_include_directories(test_ex4 PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(test_ex5 ${SRC_FILES} test_ex5.cpp)
target_include_directories(test_ex5 PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(check_ex1 check_ex1.cpp capture_output.cpp compare_files.cpp)
target_include_directories(check_ex1 PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_ex1 COMMAND check_ex1)

add_executable(check_ex2 check_ex2.cpp capture_output.cpp compare_files.cpp)
target_include_directories(check_ex2 PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_ex2 COMMAND check_ex2)

add_executable(check_ex3 check_ex3.cpp capture_output.cpp compare_files.cpp)
target_include_directories(check_ex3 PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_ex3 COMMAND check_ex3)

add_executable(check_ex4 check_ex4.cpp capture_output.cpp compare_files.cpp)
target_include_directories(check_ex4 PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_ex4 COMMAND check_ex4)

add_executable(check_ex5 check_ex5.cpp capture_output.cpp compare_files.cpp)
target_include_directories(check_ex5 PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_ex5 COMMAND check_ex5)