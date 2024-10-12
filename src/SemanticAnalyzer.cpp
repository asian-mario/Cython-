#include "SemanticAnalyzer.h"
#include <iostream>

void SemanticAnalyzer::visit(VariableDeclarationNode& node) {
    std::cout << "Analyzing Variable Declaration Node: " << node.name << " of type " << node.type << " with value " << node.value << std::endl;
    // Add additional semantic analysis logic here
}

void SemanticAnalyzer::visit(FunctionCallNode& node) {
    std::cout << "Analyzing Function Call Node: " << node.functionName << std::endl;
    // Add additional semantic analysis logic here
}

void SemanticAnalyzer::visit(ClassNode& node) {
    std::cout << "Analyzing Class Node: " << node.className << std::endl;
    for (auto& stmt : node.body) {
        stmt->accept(*this); // Visit each statement inside the class
    }
}

void SemanticAnalyzer::visit(AssignmentNode& node) {
    std::cout << "Analyzing Assignment Node: " << node.name << " = " << node.value << std::endl;
    // Add additional semantic analysis logic here
}

void SemanticAnalyzer::visit(FunctionDefinitionNode& node) {
    std::cout << "Analyzing Function Definition Node: " << node.functionName << std::endl;
    for (auto& stmt : node.body) {
        stmt->accept(*this); // Visit each statement inside the function
    }
}

void SemanticAnalyzer::visit(OutputStatementNode& node) {
    std::cout << "Analyzing Output Statement Node" << std::endl;
    for (auto& expr : node.expressions) {
        expr->accept(*this); // Visit each expression in the output
    }
}

