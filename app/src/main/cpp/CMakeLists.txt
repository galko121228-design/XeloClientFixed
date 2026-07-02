cmake_minimum_required(VERSION 3.22)
project(xelo LANGUAGES CXX)

set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Build type" FORCE)
set(BUILD_SHARED_LIBS ON CACHE BOOL "Build shared libraries" FORCE)

if(ANDROID)
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

add_subdirectory(unpaircore)
add_subdirectory(Preloader)
add_subdirectory(xelo_init)

# Основной overlay
add_subdirectory(XeloOverlay)

# Подмодули XeloOverlay (только те, что реально существуют)
add_subdirectory(XeloOverlay/src/counter)
add_subdirectory(XeloOverlay/src/zoom)
add_subdirectory(XeloOverlay/src/esp)

# Временно отключаем, так как папка Build отсутствует
# add_subdirectory(libHttpClient/Build/libHttpClient.Android)

add_subdirectory(xelo_motion_blur)
