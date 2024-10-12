
// Generated from CythonPP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CythonPPLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, AUTO = 4, CLASS = 5, COUT = 6, LT_LT = 7, 
    IDENTIFIER = 8, NUMBER = 9, STRING = 10, WS = 11, SEMI = 12, COLON = 13, 
    LBRACE = 14, RBRACE = 15, LPAREN = 16, RPAREN = 17, EQ = 18
  };

  explicit CythonPPLexer(antlr4::CharStream *input);

  ~CythonPPLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

