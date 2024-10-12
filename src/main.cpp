#include <iostream>
#include "antlr4-runtime.h"
#include "CythonPPLexer.h"
#include "CythonPPParser.h"

using namespace antlr4;

int main() {
    // Sample input to parse
    std::string code = "age = 10; class Cat { speak() { cout << \"Meow\"; } }";

    // Create an input stream for the code
    ANTLRInputStream input(code);

    // Create a lexer to tokenize the input stream
    CythonPPLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Create a parser to build the parse tree
    CythonPPParser parser(&tokens);
    CythonPPParser::ProgramContext* tree = parser.program();

    std::cout << "Parsing completed successfully!" << std::endl;

    // Keep the console window open until user presses Enter
    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0;
}
