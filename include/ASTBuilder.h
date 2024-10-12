#pragma once

#include <memory>
#include "CythonPPBaseVisitor.h"
#include "ASTNodes.h"

// ASTBuilder class for constructing the AST
class ASTBuilder : public CythonPPBaseVisitor {
public:
    std::any visitVariableDeclaration(CythonPPParser::VariableDeclarationContext* ctx) override;
    std::any visitFunctionCall(CythonPPParser::FunctionCallContext* ctx) override;
    std::any visitClassDeclaration(CythonPPParser::ClassDeclarationContext* ctx) override;
    std::any visitAssignment(CythonPPParser::AssignmentContext* ctx) override;  // New visitor method

    // Add other declarations for additional AST nodes...
};
