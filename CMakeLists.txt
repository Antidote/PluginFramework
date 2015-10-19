cmake_minimum_required(VERSION 3.0)
project(PluginFramework)

if(NOT MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR True)
set(CMAKE_AUTOMOC True)

include_directories(include)

add_library(PluginFramework
    src/DocumentBase.cpp include/DocumentBase.hpp
    src/GameDocument.cpp include/GameDocument.hpp
    src/PluginSettingsDialog include/PluginSettingsDialog.hpp
    include/PluginInterface.hpp
    include/WiiKeyManagerBase.hpp
    include/MainWindowBase.hpp
)

target_link_libraries(PluginFramework
    ${Qt5Core_LIBRARIES}
    ${Qt5Gui_LIBRARIES}
    ${Qt5Widgets_LIBRARIES}
)