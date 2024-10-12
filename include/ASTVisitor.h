#pragma once

// Forward declaration of AST nodes
class VariableDeclarationNode;
class FunctionCallNode;
class ClassNode;

class ASTVisitor {
public:
    virtual ~ASTVisitor() = default;

    virtual void visit(VariableDeclarationNode& node) = 0;
    virtual void visit(FunctionCallNode& node) = 0;
    virtual void visit(ClassNode& node) = 0;

    // Add more virtual visit methods as necessary
};

