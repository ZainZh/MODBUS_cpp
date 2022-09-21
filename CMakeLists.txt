cmake_minimum_required (VERSION 2.8)
project(main CXX)
 
 find_package(OpenCV REQUIRED)
 include_directories(${OpenCV_INCLUDE_DIRS})
 INCLUDE_DIRECTORIES(/usr/include/modbus)
 
aux_source_directory(. DIR_SRC)
add_executable (main ${DIR_SRC})

target_link_libraries(main ${OpenCV_LIBS})
TARGET_LINK_LIBRARIES(main libmodbus.so)
