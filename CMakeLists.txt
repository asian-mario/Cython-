cmake_minimum_required(VERSION 3.15)
project(CythonPP)

set(CMAKE_CXX_STANDARD 17)

# Include ANTLR runtime headers
include_directories(
    include
    grammar
    "C:/tools/antlr4/runtime/Cpp/runtime/src"
)

# Add the directory containing antlr4-runtime.lib to the linker search path
link_directories("C:/tools/antlr4/runtime/Cpp/build/runtime/Release")

add_executable(CythonPP
    src/main.cpp
    grammar/CythonPPLexer.cpp
    grammar/CythonPPParser.cpp
)

# Link with the ANTLR runtime library
target_link_libraries(CythonPP antlr4-runtime)

# Post-build command to copy antlr4-runtime.dll to the output directory
add_custom_command(TARGET CythonPP
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "C:/tools/antlr4/runtime/Cpp/build/runtime/Release/antlr4-runtime.dll"
        $<TARGET_FILE_DIR:CythonPP>
)
