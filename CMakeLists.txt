cmake_minimum_required (VERSION 2.8)
project(gas CXX)
 
# find_package(OpenCV REQUIRED)
# include_directories(${OpenCV_INCLUDE_DIRS})
 INCLUDE_DIRECTORIES(/usr/include/modbus)
 
aux_source_directory(. DIR_SRC)
add_executable (gas ${DIR_SRC})

#target_link_libraries(gas ${OpenCV_LIBS})
TARGET_LINK_LIBRARIES(gas libmodbus.so)
