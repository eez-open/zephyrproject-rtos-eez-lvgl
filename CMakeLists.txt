# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(lvgl)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_definitions(-DEEZ_FOR_LVGL -DLV_LVGL_H_INCLUDE_SIMPLE)

#FILE(GLOB_RECURSE app_sources src/ui/ui_image_logo_eez.c src/ui/ui_image_zephyre_logo.c src/ui/ui_image_logo_lvgl.c)
FILE(GLOB_RECURSE app_sources src/ui/img*.c src/ui/ui_image*.c src/*.c src/ui/*.c eez-framework/src/*.c eez-framework/src/*.cpp)

target_include_directories(app PRIVATE src/ui eez-framework/src)

target_sources(app PRIVATE ${app_sources})
