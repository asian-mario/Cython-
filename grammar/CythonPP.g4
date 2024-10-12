grammar CythonPP;

// Lexer Rules (Tokens)
AUTO: 'auto';
CLASS: 'class';
COUT: 'cout';
LT_LT: '<<';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
NUMBER: [0-9]+;
STRING: '"' .*? '"';
WS: [ \t\r\n]+ -> skip; // Skip whitespaces
SEMI: ';';
COLON: ':';
LBRACE: '{';
RBRACE: '}';
LPAREN: '(';
RPAREN: ')';
EQ: '=';

// Parser Rules
program: statement*;

statement: variableDeclaration
         | assignment
         | classDeclaration
         | functionDefinition
         | functionCall
         | outputStatement
         ;

variableDeclaration: typeSpecifier? IDENTIFIER EQ expression SEMI;

assignment: IDENTIFIER EQ expression SEMI;

expression: IDENTIFIER
          | NUMBER
          | STRING
          ;

classDeclaration: CLASS IDENTIFIER LBRACE statement* RBRACE;

functionDefinition: typeSpecifier? IDENTIFIER LPAREN parameterList? RPAREN LBRACE statement* RBRACE;

functionCall: IDENTIFIER LPAREN (expression (',' expression)*)? RPAREN SEMI;

outputStatement: COUT LT_LT expression (LT_LT expression)* SEMI;

parameterList: (typeSpecifier IDENTIFIER (',' typeSpecifier IDENTIFIER)*)?;

typeSpecifier: AUTO | 'int' | 'string' | 'float' | 'void';
