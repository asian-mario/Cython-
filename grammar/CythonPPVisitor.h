
// Generated from CythonPP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CythonPPParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CythonPPParser.
 */
class  CythonPPVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CythonPPParser.
   */
    virtual std::any visitProgram(CythonPPParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(CythonPPParser::StatementContext *context) = 0;

    virtual std::any visitVariableDeclaration(CythonPPParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitAssignment(CythonPPParser::AssignmentContext *context) = 0;

    virtual std::any visitExpression(CythonPPParser::ExpressionContext *context) = 0;

    virtual std::any visitClassDeclaration(CythonPPParser::ClassDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(CythonPPParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionCall(CythonPPParser::FunctionCallContext *context) = 0;

    virtual std::any visitOutputStatement(CythonPPParser::OutputStatementContext *context) = 0;

    virtual std::any visitParameterList(CythonPPParser::ParameterListContext *context) = 0;

    virtual std::any visitTypeSpecifier(CythonPPParser::TypeSpecifierContext *context) = 0;


};

