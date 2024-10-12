
// Generated from CythonPP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CythonPPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CythonPPParser.
 */
class  CythonPPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CythonPPParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CythonPPParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(CythonPPParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CythonPPParser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(CythonPPParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(CythonPPParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterAssignment(CythonPPParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CythonPPParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(CythonPPParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CythonPPParser::ExpressionContext *ctx) = 0;

  virtual void enterClassDeclaration(CythonPPParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(CythonPPParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(CythonPPParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CythonPPParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionCall(CythonPPParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(CythonPPParser::FunctionCallContext *ctx) = 0;

  virtual void enterOutputStatement(CythonPPParser::OutputStatementContext *ctx) = 0;
  virtual void exitOutputStatement(CythonPPParser::OutputStatementContext *ctx) = 0;

  virtual void enterParameterList(CythonPPParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(CythonPPParser::ParameterListContext *ctx) = 0;

  virtual void enterTypeSpecifier(CythonPPParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(CythonPPParser::TypeSpecifierContext *ctx) = 0;


};

