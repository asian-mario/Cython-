
// Generated from CythonPP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CythonPPVisitor.h"


/**
 * This class provides an empty implementation of CythonPPVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CythonPPBaseVisitor : public CythonPPVisitor {
public:

  virtual std::any visitProgram(CythonPPParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CythonPPParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(CythonPPParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(CythonPPParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(CythonPPParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDeclaration(CythonPPParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(CythonPPParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(CythonPPParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutputStatement(CythonPPParser::OutputStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(CythonPPParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(CythonPPParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

