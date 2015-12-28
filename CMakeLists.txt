cmake_minimum_required(VERSION 2.8)
project (Cedar)
IF (${CMAKE_MAJOR_VERSION} GREATER 2)
    CMAKE_POLICY(SET CMP0042 NEW)
ENDIF (${CMAKE_MAJOR_VERSION} GREATER 2)

# init forestdb submodule
set(FORESTDB_REPO ${PROJECT_SOURCE_DIR}/forestdb)
find_package(Git)
if(GIT_FOUND)
  message("git found: ${GIT_EXECUTABLE}")
endif()
execute_process(COMMAND ${GIT_EXECUTABLE} submodule init
  WORKING_DIRECTORY ../)
execute_process(COMMAND ${GIT_EXECUTABLE} submodule update
  WORKING_DIRECTORY ../)

# tests
enable_testing()
add_subdirectory("${PROJECT_SOURCE_DIR}/unit")
