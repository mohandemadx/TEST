cmake_minimum_required(VERSION 3.12)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake" )

project(MyQtApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH "C:/vcpkg/vcpkg/installed/x64-windows/share")

# Packages
find_package(Qt5 REQUIRED COMPONENTS Core Gui UiTools Widgets)

# Source Files
set(SRC_FILES 
    main.cpp
    mainwindow.cpp)

# Header Files
set(HEADERS
    include/mainwindow.h
)

qt5_wrap_cpp(MOC_SOURCES ${HEADERS}) # Generate MOC files

add_executable(MyQtApp ${SRC_FILES} ${MOC_SOURCES}) # Include MOC files in the target

# Linking Headers
target_include_directories(MyQtApp PUBLIC include/)

# Linking Libraries
target_link_libraries(MyQtApp PUBLIC 
    Qt5::Core
    Qt5::Gui
    Qt5::UiTools
    Qt5::Widgets
)
