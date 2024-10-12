#pragma once

#include "ASTNodes.h" // Include ASTNodes instead of using forward declarations

class ASTVisitor {
public:
    virtual ~ASTVisitor() = default;

    virtual void visit(VariableDeclarationNode& node) = 0;
    virtual void visit(FunctionCallNode& node) = 0;
    virtual void visit(ClassNode& node) = 0;
    virtual void visit(AssignmentNode& node) = 0;
    virtual void visit(FunctionDefinitionNode& node) = 0;
    virtual void visit(OutputStatementNode& node) = 0; // New visitor method


    // Add more virtual visit methods as necessary
};
