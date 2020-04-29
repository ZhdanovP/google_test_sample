file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testbinTree ${SRCS})

TARGET_LINK_LIBRARIES(testbinTree
    libbinTree
    libgtest
    libgmock
)

add_test(NAME testbinTree
         COMMAND testbinTree)
