#include "ASTBuilder.h"
#include <any>
#include <iostream>

// Implementation of visitVariableDeclaration
std::any ASTBuilder::visitVariableDeclaration(CythonPPParser::VariableDeclarationContext* ctx) {
    std::cout << "Visiting Variable Declaration Node" << std::endl;
    std::string type = ctx->typeSpecifier() ? ctx->typeSpecifier()->getText() : "auto";
    std::string name = ctx->IDENTIFIER()->getText();
    std::string value = ctx->expression()->getText();

    auto node = std::make_shared<VariableDeclarationNode>(type, name, value);
    return std::any(node);
}

// Implementation of visitFunctionCall
std::any ASTBuilder::visitFunctionCall(CythonPPParser::FunctionCallContext* ctx) {
    std::cout << "Visiting Function Call Node" << std::endl;
    std::string functionName = ctx->IDENTIFIER()->getText();
    std::vector<std::shared_ptr<ASTNode>> arguments;

    // Iterate through each argument and visit it
    for (auto arg : ctx->expression()) {
        auto result = visit(arg);
        if (result.has_value()) {
            try {
                auto argumentNode = std::any_cast<std::shared_ptr<ASTNode>>(result);
                arguments.push_back(argumentNode);
            }
            catch (const std::bad_any_cast& e) {
                std::cerr << "Error casting argument in FunctionCallNode: " << e.what() << std::endl;
                return {};
            }
        }
        else {
            std::cerr << "Error: visit() did not return a value for an argument in FunctionCallNode." << std::endl;
            return {};
        }
    }

    // Create and return the FunctionCallNode wrapped in std::any
    auto node = std::make_shared<FunctionCallNode>(functionName, arguments);
    return std::any(node);
}


std::any ASTBuilder::visitClassDeclaration(CythonPPParser::ClassDeclarationContext* ctx) {
    std::cout << "Visiting Class Declaration Node" << std::endl;
    std::string className = ctx->IDENTIFIER()->getText();
    std::vector<std::shared_ptr<ASTNode>> body;

    for (auto stmt : ctx->statement()) {
        auto stmtResult = visit(stmt);
        if (stmtResult.has_value()) {
            try {
                auto statementNode = std::any_cast<std::shared_ptr<ASTNode>>(stmtResult);
                body.push_back(statementNode);
            }
            catch (const std::bad_any_cast& e) {
                std::cerr << "Error casting statement in ClassNode: " << e.what() << std::endl;
                return {};
            }
        }
        else {
            std::cerr << "Error: visit() did not return a value for a statement in ClassNode." << std::endl;
            return {};
        }
    }

    return std::make_shared<ClassNode>(className, body);
}


std::any ASTBuilder::visitAssignment(CythonPPParser::AssignmentContext* ctx) {
    std::cout << "Visiting Assignment Node" << std::endl;
    std::string name = ctx->IDENTIFIER()->getText();
    std::string value = ctx->expression()->getText();

    auto node = std::make_shared<AssignmentNode>(name, value);
    return std::any(node);
}

std::any ASTBuilder::visitFunctionDefinition(CythonPPParser::FunctionDefinitionContext* ctx) {
    std::cout << "Visiting Function Definition Node" << std::endl;
    std::string functionName = ctx->IDENTIFIER()->getText();
    std::vector<std::shared_ptr<ASTNode>> body;

    for (auto stmt : ctx->statement()) {
        auto stmtResult = visit(stmt);
        if (stmtResult.has_value()) {
            try {
                auto statementNode = std::any_cast<std::shared_ptr<ASTNode>>(stmtResult);
                body.push_back(statementNode);
            }
            catch (const std::bad_any_cast& e) {
                std::cerr << "Error casting statement in FunctionDefinitionNode: " << e.what() << std::endl;
                return {};
            }
        }
        else {
            std::cerr << "Error: visit() did not return a value for a statement in FunctionDefinitionNode." << std::endl;
            return {};
        }
    }

    return std::make_shared<FunctionDefinitionNode>(functionName, body);
}


std::any ASTBuilder::visitOutputStatement(CythonPPParser::OutputStatementContext* ctx) {
    std::cout << "Visiting Output Statement Node" << std::endl;

    std::vector<std::shared_ptr<ASTNode>> expressions;

    for (auto expr : ctx->expression()) {
        auto expressionResult = visit(expr);
        if (expressionResult.has_value()) {
            try {
                auto expressionNode = std::any_cast<std::shared_ptr<ASTNode>>(expressionResult);
                expressions.push_back(expressionNode);
            }
            catch (const std::bad_any_cast& e) {
                std::cerr << "Error casting expression in OutputStatementNode: " << e.what() << std::endl;
                return {};
            }
        }
        else {
            std::cerr << "Error: visit() did not return a value for an expression in OutputStatementNode." << std::endl;
            return {};
        }
    }

    return std::make_shared<OutputStatementNode>(expressions);
}


