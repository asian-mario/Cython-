#include "SemanticAnalyzer.h"
#include <iostream>

void SemanticAnalyzer::visit(VariableDeclarationNode& node) {
    // Example semantic check: ensure variable is not already declared
    std::cout << "Visiting VariableDeclarationNode: " << node.name << std::endl;
}

void SemanticAnalyzer::visit(FunctionCallNode& node) {
    // Example semantic check for function calls
    std::cout << "Visiting FunctionCallNode: " << node.functionName << std::endl;
}

void SemanticAnalyzer::visit(ClassNode& node) {
    // Example semantic check for class declarations
    std::cout << "Visiting ClassNode: " << node.className << std::endl;
}
