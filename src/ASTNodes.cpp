#include "ASTNodes.h"
#include "ASTVisitor.h"

// Implementation of accept method for VariableDeclarationNode
void VariableDeclarationNode::accept(ASTVisitor& visitor) {
    visitor.visit(*this);
}

// Implementation of accept method for FunctionCallNode
void FunctionCallNode::accept(ASTVisitor& visitor) {
    visitor.visit(*this);
}

// Implementation of accept method for ClassNode
void ClassNode::accept(ASTVisitor& visitor) {
    visitor.visit(*this);
}
