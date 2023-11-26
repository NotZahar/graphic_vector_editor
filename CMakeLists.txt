cmake_minimum_required(VERSION 3.21)

set(PATCH_VERSION 1 CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project("GVEditor" VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_subdirectory(libs)

add_executable(${PROJECT_NAME})
add_executable(editor_tests
    tests/editor.cpp
)

target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp
        src/states/init_state/init_state.cpp
)

target_include_directories(${PROJECT_NAME} 
    PRIVATE 
        Utility)
target_include_directories(editor_tests 
    PRIVATE 
        ${GTEST_INCLUDE_DIRS} Utility)

target_link_libraries(${PROJECT_NAME} 
    PRIVATE 
        Utility)
target_link_libraries(editor_tests 
    PRIVATE 
        ${GTEST_BOTH_LIBRARIES} Utility)

if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -pedantic)
    target_compile_options(editor_tests PRIVATE -Wall -Wextra -Werror -pedantic)
endif()

# generate deb
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()
add_test(NAME editor_tests COMMAND editor_tests)