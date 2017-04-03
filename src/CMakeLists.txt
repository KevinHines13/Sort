include_directories(${Sort_SOURCE_DIR}/Sort/include)

#add files with .cpp 
file(GLOB SOURCES "src/*.cpp")

add_executable(Sort ${Sources})
