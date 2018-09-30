set(SRCS
    # All source files have to be included here.
    # The CMAKE_CURRENT_SOURCE_DIR makes the path relative to this CMakeLists.txt file.
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c

    # The parent scope makes this variable visible in the CMakeLists.txt file of the
    # parent directory.
    PARENT_SCOPE)
