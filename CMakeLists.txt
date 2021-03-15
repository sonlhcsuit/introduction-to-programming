cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Introduction-to-programming VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)



# configure a header file to pass some of the CMake settings
# to the source code
configure_file(Introduction-to-programming-config.h.in Introduction-to-programming.h)


# For option, to select which exercise function you would call
option(USE_SECTION_ONE "Use tutorial provided math implementation" ON)

if(USE_SECTION_ONE)
  add_subdirectory(SectionOne)
  list(APPEND EXTRA_LIBS SectionOne)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/SectionOne")
endif()

# add the executable
add_executable(tut tutorial.cxx)

# Add subdirectory, let cmake find for external file

# target_link_libraries(Introduction-to-programming PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Introduction-to-programming PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           ${EXTRA_INCLUDES}
                           )
