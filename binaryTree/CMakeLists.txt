set(libbinTree
    binTree.hpp
    binTree.cpp
)

# Declare the library
add_library(libbinTree STATIC
    ${libbinTree}
)

target_link_libraries(libbinTree)

# Specify here the include directories exported
# by this library
target_include_directories(libbinTree PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
