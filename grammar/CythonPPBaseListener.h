
// Generated from CythonPP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CythonPPListener.h"


/**
 * This class provides an empty implementation of CythonPPListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CythonPPBaseListener : public CythonPPListener {
public:

  virtual void enterProgram(CythonPPParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CythonPPParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(CythonPPParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CythonPPParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(CythonPPParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(CythonPPParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(CythonPPParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CythonPPParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(CythonPPParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CythonPPParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(CythonPPParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(CythonPPParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(CythonPPParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(CythonPPParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(CythonPPParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(CythonPPParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterOutputStatement(CythonPPParser::OutputStatementContext * /*ctx*/) override { }
  virtual void exitOutputStatement(CythonPPParser::OutputStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

