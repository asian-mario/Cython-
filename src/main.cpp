#include <iostream>
#include "antlr4-runtime.h"
#include "CythonPPLexer.h"
#include "CythonPPParser.h"
#include "ASTNodes.h"
#include "ASTBuilder.h"
#include "SemanticAnalyzer.h"
#include "ASTVisitor.h"

using namespace antlr4;

int main() {
    // Step 1: Input code to parse
    std::string code = "age = 10; class Cat { speak() { cout << \"Meow\"; } }";

    // Step 2: Create an input stream for the code
    ANTLRInputStream input(code);

    // Step 3: Create a lexer to tokenize the input stream
    std::cout << "Creating lexer..." << std::endl;
    CythonPPLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Step 4: Create a parser to build the parse tree
    std::cout << "Creating parser..." << std::endl;
    CythonPPParser parser(&tokens);
    CythonPPParser::ProgramContext* tree = parser.program();

    // Step 5: Create the AST using the ASTBuilder visitor
    std::cout << "Building AST..." << std::endl;
    ASTBuilder astBuilder;

    std::any result = astBuilder.visitProgram(tree);
    std::shared_ptr<ASTNode> ast;

    if (result.has_value()) {
        try {
            ast = std::any_cast<std::shared_ptr<ASTNode>>(result);
        }
        catch (const std::bad_any_cast& e) {
            std::cerr << "Error during AST generation: " << e.what() << std::endl;
            return 1;
        }
    }
    else {
        std::cerr << "Error: ASTBuilder did not return a value." << std::endl;
        return 1;
    }

    if (!ast) {
        std::cerr << "Error: AST is null after building." << std::endl;
        return 1;
    }

    std::cout << "Parsing and AST generation completed successfully!" << std::endl;


    // Step 6: Perform semantic analysis on the generated AST
    std::cout << "Performing semantic analysis..." << std::endl;
    SemanticAnalyzer semanticAnalyzer;
    if (ast) {
        ast->accept(semanticAnalyzer);
    }
    else {
        std::cerr << "Error: AST is null." << std::endl;
        return 1;
    }

    std::cout << "Semantic analysis completed successfully!" << std::endl;

    // Keep the console window open until user presses Enter
    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0;
}
