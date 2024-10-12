#pragma once

#include <string>
#include <vector>
#include <memory>
class ASTVisitor;  // Forward declaration

// Base class for all AST nodes
class ASTNode {
public:
    virtual ~ASTNode() = default;
    virtual void accept(ASTVisitor& visitor) = 0; // Pure virtual method to be implemented by derived classes
};

// Variable Declaration Node
class VariableDeclarationNode : public ASTNode {
public:
    std::string type;
    std::string name;
    std::string value;

    VariableDeclarationNode(const std::string& type, const std::string& name, const std::string& value)
        : type(type), name(name), value(value) {}

    void accept(ASTVisitor& visitor) override;
};

// Function Call Node
class FunctionCallNode : public ASTNode {
public:
    std::string functionName;
    std::vector<std::shared_ptr<ASTNode>> arguments;

    FunctionCallNode(const std::string& functionName, const std::vector<std::shared_ptr<ASTNode>>& arguments)
        : functionName(functionName), arguments(arguments) {}

    void accept(ASTVisitor& visitor) override;
};

// Class Node
class ClassNode : public ASTNode {
public:
    std::string className;
    std::vector<std::shared_ptr<ASTNode>> body;

    ClassNode(const std::string& className, const std::vector<std::shared_ptr<ASTNode>>& body)
        : className(className), body(body) {}

    void accept(ASTVisitor& visitor) override;
};

// AssignmentNode class
class AssignmentNode : public ASTNode {
public:
    AssignmentNode(const std::string& name, const std::string& value)
        : name(name), value(value) {}

    void accept(ASTVisitor& visitor) override;

    std::string name;
    std::string value;
};

class FunctionDefinitionNode : public ASTNode {
public:
    FunctionDefinitionNode(const std::string& name, const std::vector<std::shared_ptr<ASTNode>>& body)
        : functionName(name), body(body) {}

    void accept(ASTVisitor& visitor) override;

    std::string functionName;
    std::vector<std::shared_ptr<ASTNode>> body;
};

// OutputStatementNode class
class OutputStatementNode : public ASTNode {
public:
    OutputStatementNode(const std::vector<std::shared_ptr<ASTNode>>& expressions)
        : expressions(expressions) {}

    void accept(ASTVisitor& visitor) override;

    std::vector<std::shared_ptr<ASTNode>> expressions;
};
