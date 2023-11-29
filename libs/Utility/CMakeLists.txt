cmake_minimum_required(VERSION 3.21)

project("Utility" VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC)

target_sources(${PROJECT_NAME}
    PRIVATE
        # states
        src/states/state_manager.cpp
        src/states/state.cpp
        
        # files
        src/files/file_service.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        # where the library itself will look for its internal headers
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC
        # where top-level project will look for the library's public headers
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        # where external projects will look for the library's public headers
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

# without it public headers won't get installed
set(PUBLIC_HEADERS
    # states
    include/states/state_manager.hpp
    include/states/state.hpp
    
    # files
    include/files/file_service.hpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")

if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -pedantic)
endif()

# where to find our CMake modules
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(Installing)