#pragma once
#define SEMANTICANALYZER_H

#include "ASTVisitor.h"
#include "ASTNodes.h" // Assuming AST nodes are needed

class SemanticAnalyzer : public ASTVisitor {
public:
    void visit(VariableDeclarationNode& node) override;
    void visit(FunctionCallNode& node) override;
    void visit(ClassNode& node) override;
    // Add more visit methods if necessary
};

