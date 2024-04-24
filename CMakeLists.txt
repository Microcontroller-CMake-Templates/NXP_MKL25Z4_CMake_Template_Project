cmake_minimum_required(VERSION 3.11)
include(FetchContent)

FetchContent_Declare(
  NXP_MKL25Z_SDK
  GIT_REPOSITORY https://github.com/Microcontroller-CMake-Templates/NXP_MKL25Z_SDK.git
  GIT_TAG        main
  SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/SDK
)

FetchContent_MakeAvailable(NXP_MKL25Z_SDK)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/SDK/toolchain_armgcc.cmake)

project(NXP_MKL25Z4_Project C CXX ASM)

add_executable(NXP_MKL25Z4_BLINK.elf src/main.c ${STARTUP_SCRIPT_SOURCES})

