
// Generated from CythonPP.g4 by ANTLR 4.13.2


#include "CythonPPListener.h"
#include "CythonPPVisitor.h"

#include "CythonPPParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CythonPPParserStaticData final {
  CythonPPParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CythonPPParserStaticData(const CythonPPParserStaticData&) = delete;
  CythonPPParserStaticData(CythonPPParserStaticData&&) = delete;
  CythonPPParserStaticData& operator=(const CythonPPParserStaticData&) = delete;
  CythonPPParserStaticData& operator=(CythonPPParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cythonppParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CythonPPParserStaticData> cythonppParserStaticData = nullptr;

void cythonppParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cythonppParserStaticData != nullptr) {
    return;
  }
#else
  assert(cythonppParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CythonPPParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "variableDeclaration", "assignment", "expression", 
      "classDeclaration", "functionDefinition", "functionCall", "outputStatement", 
      "parameterList", "typeSpecifier"
    },
    std::vector<std::string>{
      "", "','", "'int'", "'string'", "'float'", "'void'", "'auto'", "'class'", 
      "'cout'", "'<<'", "", "", "", "", "';'", "':'", "'{'", "'}'", "'('", 
      "')'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "AUTO", "CLASS", "COUT", "LT_LT", "IDENTIFIER", 
      "NUMBER", "STRING", "WS", "SEMI", "COLON", "LBRACE", "RBRACE", "LPAREN", 
      "RPAREN", "EQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,123,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,3,1,35,8,1,1,2,3,2,38,8,2,1,2,1,2,1,2,1,2,1,2,1,3,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,5,5,56,8,5,10,5,12,5,59,9,5,1,5,
  	1,5,1,6,3,6,64,8,6,1,6,1,6,1,6,3,6,69,8,6,1,6,1,6,1,6,5,6,74,8,6,10,6,
  	12,6,77,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,5,7,86,8,7,10,7,12,7,89,9,7,3,
  	7,91,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,5,8,101,8,8,10,8,12,8,104,9,
  	8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,114,8,9,10,9,12,9,117,9,9,3,9,119,
  	8,9,1,10,1,10,1,10,0,0,11,0,2,4,6,8,10,12,14,16,18,20,0,2,1,0,10,12,1,
  	0,2,6,127,0,25,1,0,0,0,2,34,1,0,0,0,4,37,1,0,0,0,6,44,1,0,0,0,8,49,1,
  	0,0,0,10,51,1,0,0,0,12,63,1,0,0,0,14,80,1,0,0,0,16,95,1,0,0,0,18,118,
  	1,0,0,0,20,120,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,27,1,0,0,0,25,23,
  	1,0,0,0,25,26,1,0,0,0,26,1,1,0,0,0,27,25,1,0,0,0,28,35,3,4,2,0,29,35,
  	3,6,3,0,30,35,3,10,5,0,31,35,3,12,6,0,32,35,3,14,7,0,33,35,3,16,8,0,34,
  	28,1,0,0,0,34,29,1,0,0,0,34,30,1,0,0,0,34,31,1,0,0,0,34,32,1,0,0,0,34,
  	33,1,0,0,0,35,3,1,0,0,0,36,38,3,20,10,0,37,36,1,0,0,0,37,38,1,0,0,0,38,
  	39,1,0,0,0,39,40,5,10,0,0,40,41,5,20,0,0,41,42,3,8,4,0,42,43,5,14,0,0,
  	43,5,1,0,0,0,44,45,5,10,0,0,45,46,5,20,0,0,46,47,3,8,4,0,47,48,5,14,0,
  	0,48,7,1,0,0,0,49,50,7,0,0,0,50,9,1,0,0,0,51,52,5,7,0,0,52,53,5,10,0,
  	0,53,57,5,16,0,0,54,56,3,2,1,0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,
  	0,0,57,58,1,0,0,0,58,60,1,0,0,0,59,57,1,0,0,0,60,61,5,17,0,0,61,11,1,
  	0,0,0,62,64,3,20,10,0,63,62,1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,
  	5,10,0,0,66,68,5,18,0,0,67,69,3,18,9,0,68,67,1,0,0,0,68,69,1,0,0,0,69,
  	70,1,0,0,0,70,71,5,19,0,0,71,75,5,16,0,0,72,74,3,2,1,0,73,72,1,0,0,0,
  	74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,78,1,0,0,0,77,75,1,0,0,0,
  	78,79,5,17,0,0,79,13,1,0,0,0,80,81,5,10,0,0,81,90,5,18,0,0,82,87,3,8,
  	4,0,83,84,5,1,0,0,84,86,3,8,4,0,85,83,1,0,0,0,86,89,1,0,0,0,87,85,1,0,
  	0,0,87,88,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,90,82,1,0,0,0,90,91,1,0,
  	0,0,91,92,1,0,0,0,92,93,5,19,0,0,93,94,5,14,0,0,94,15,1,0,0,0,95,96,5,
  	8,0,0,96,97,5,9,0,0,97,102,3,8,4,0,98,99,5,9,0,0,99,101,3,8,4,0,100,98,
  	1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,
  	0,104,102,1,0,0,0,105,106,5,14,0,0,106,17,1,0,0,0,107,108,3,20,10,0,108,
  	115,5,10,0,0,109,110,5,1,0,0,110,111,3,20,10,0,111,112,5,10,0,0,112,114,
  	1,0,0,0,113,109,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,
  	0,116,119,1,0,0,0,117,115,1,0,0,0,118,107,1,0,0,0,118,119,1,0,0,0,119,
  	19,1,0,0,0,120,121,7,1,0,0,121,21,1,0,0,0,12,25,34,37,57,63,68,75,87,
  	90,102,115,118
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cythonppParserStaticData = std::move(staticData);
}

}

CythonPPParser::CythonPPParser(TokenStream *input) : CythonPPParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CythonPPParser::CythonPPParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CythonPPParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cythonppParserStaticData->atn, cythonppParserStaticData->decisionToDFA, cythonppParserStaticData->sharedContextCache, options);
}

CythonPPParser::~CythonPPParser() {
  delete _interpreter;
}

const atn::ATN& CythonPPParser::getATN() const {
  return *cythonppParserStaticData->atn;
}

std::string CythonPPParser::getGrammarFileName() const {
  return "CythonPP.g4";
}

const std::vector<std::string>& CythonPPParser::getRuleNames() const {
  return cythonppParserStaticData->ruleNames;
}

const dfa::Vocabulary& CythonPPParser::getVocabulary() const {
  return cythonppParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CythonPPParser::getSerializedATN() const {
  return cythonppParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

CythonPPParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CythonPPParser::StatementContext *> CythonPPParser::ProgramContext::statement() {
  return getRuleContexts<CythonPPParser::StatementContext>();
}

CythonPPParser::StatementContext* CythonPPParser::ProgramContext::statement(size_t i) {
  return getRuleContext<CythonPPParser::StatementContext>(i);
}


size_t CythonPPParser::ProgramContext::getRuleIndex() const {
  return CythonPPParser::RuleProgram;
}

void CythonPPParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CythonPPParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any CythonPPParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::ProgramContext* CythonPPParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CythonPPParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1532) != 0)) {
      setState(22);
      statement();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CythonPPParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CythonPPParser::VariableDeclarationContext* CythonPPParser::StatementContext::variableDeclaration() {
  return getRuleContext<CythonPPParser::VariableDeclarationContext>(0);
}

CythonPPParser::AssignmentContext* CythonPPParser::StatementContext::assignment() {
  return getRuleContext<CythonPPParser::AssignmentContext>(0);
}

CythonPPParser::ClassDeclarationContext* CythonPPParser::StatementContext::classDeclaration() {
  return getRuleContext<CythonPPParser::ClassDeclarationContext>(0);
}

CythonPPParser::FunctionDefinitionContext* CythonPPParser::StatementContext::functionDefinition() {
  return getRuleContext<CythonPPParser::FunctionDefinitionContext>(0);
}

CythonPPParser::FunctionCallContext* CythonPPParser::StatementContext::functionCall() {
  return getRuleContext<CythonPPParser::FunctionCallContext>(0);
}

CythonPPParser::OutputStatementContext* CythonPPParser::StatementContext::outputStatement() {
  return getRuleContext<CythonPPParser::OutputStatementContext>(0);
}


size_t CythonPPParser::StatementContext::getRuleIndex() const {
  return CythonPPParser::RuleStatement;
}

void CythonPPParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CythonPPParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any CythonPPParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::StatementContext* CythonPPParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CythonPPParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(28);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(30);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(31);
      functionDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(32);
      functionCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(33);
      outputStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

CythonPPParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::VariableDeclarationContext::EQ() {
  return getToken(CythonPPParser::EQ, 0);
}

CythonPPParser::ExpressionContext* CythonPPParser::VariableDeclarationContext::expression() {
  return getRuleContext<CythonPPParser::ExpressionContext>(0);
}

tree::TerminalNode* CythonPPParser::VariableDeclarationContext::SEMI() {
  return getToken(CythonPPParser::SEMI, 0);
}

CythonPPParser::TypeSpecifierContext* CythonPPParser::VariableDeclarationContext::typeSpecifier() {
  return getRuleContext<CythonPPParser::TypeSpecifierContext>(0);
}


size_t CythonPPParser::VariableDeclarationContext::getRuleIndex() const {
  return CythonPPParser::RuleVariableDeclaration;
}

void CythonPPParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void CythonPPParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any CythonPPParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::VariableDeclarationContext* CythonPPParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, CythonPPParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 124) != 0)) {
      setState(36);
      typeSpecifier();
    }
    setState(39);
    match(CythonPPParser::IDENTIFIER);
    setState(40);
    match(CythonPPParser::EQ);
    setState(41);
    expression();
    setState(42);
    match(CythonPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CythonPPParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::AssignmentContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::AssignmentContext::EQ() {
  return getToken(CythonPPParser::EQ, 0);
}

CythonPPParser::ExpressionContext* CythonPPParser::AssignmentContext::expression() {
  return getRuleContext<CythonPPParser::ExpressionContext>(0);
}

tree::TerminalNode* CythonPPParser::AssignmentContext::SEMI() {
  return getToken(CythonPPParser::SEMI, 0);
}


size_t CythonPPParser::AssignmentContext::getRuleIndex() const {
  return CythonPPParser::RuleAssignment;
}

void CythonPPParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CythonPPParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any CythonPPParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::AssignmentContext* CythonPPParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, CythonPPParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(CythonPPParser::IDENTIFIER);
    setState(45);
    match(CythonPPParser::EQ);
    setState(46);
    expression();
    setState(47);
    match(CythonPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CythonPPParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::ExpressionContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::ExpressionContext::NUMBER() {
  return getToken(CythonPPParser::NUMBER, 0);
}

tree::TerminalNode* CythonPPParser::ExpressionContext::STRING() {
  return getToken(CythonPPParser::STRING, 0);
}


size_t CythonPPParser::ExpressionContext::getRuleIndex() const {
  return CythonPPParser::RuleExpression;
}

void CythonPPParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CythonPPParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any CythonPPParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::ExpressionContext* CythonPPParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, CythonPPParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7168) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

CythonPPParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::ClassDeclarationContext::CLASS() {
  return getToken(CythonPPParser::CLASS, 0);
}

tree::TerminalNode* CythonPPParser::ClassDeclarationContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::ClassDeclarationContext::LBRACE() {
  return getToken(CythonPPParser::LBRACE, 0);
}

tree::TerminalNode* CythonPPParser::ClassDeclarationContext::RBRACE() {
  return getToken(CythonPPParser::RBRACE, 0);
}

std::vector<CythonPPParser::StatementContext *> CythonPPParser::ClassDeclarationContext::statement() {
  return getRuleContexts<CythonPPParser::StatementContext>();
}

CythonPPParser::StatementContext* CythonPPParser::ClassDeclarationContext::statement(size_t i) {
  return getRuleContext<CythonPPParser::StatementContext>(i);
}


size_t CythonPPParser::ClassDeclarationContext::getRuleIndex() const {
  return CythonPPParser::RuleClassDeclaration;
}

void CythonPPParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void CythonPPParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}


std::any CythonPPParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::ClassDeclarationContext* CythonPPParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, CythonPPParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(CythonPPParser::CLASS);
    setState(52);
    match(CythonPPParser::IDENTIFIER);
    setState(53);
    match(CythonPPParser::LBRACE);
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1532) != 0)) {
      setState(54);
      statement();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
    match(CythonPPParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CythonPPParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::LPAREN() {
  return getToken(CythonPPParser::LPAREN, 0);
}

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::RPAREN() {
  return getToken(CythonPPParser::RPAREN, 0);
}

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::LBRACE() {
  return getToken(CythonPPParser::LBRACE, 0);
}

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::RBRACE() {
  return getToken(CythonPPParser::RBRACE, 0);
}

CythonPPParser::TypeSpecifierContext* CythonPPParser::FunctionDefinitionContext::typeSpecifier() {
  return getRuleContext<CythonPPParser::TypeSpecifierContext>(0);
}

CythonPPParser::ParameterListContext* CythonPPParser::FunctionDefinitionContext::parameterList() {
  return getRuleContext<CythonPPParser::ParameterListContext>(0);
}

std::vector<CythonPPParser::StatementContext *> CythonPPParser::FunctionDefinitionContext::statement() {
  return getRuleContexts<CythonPPParser::StatementContext>();
}

CythonPPParser::StatementContext* CythonPPParser::FunctionDefinitionContext::statement(size_t i) {
  return getRuleContext<CythonPPParser::StatementContext>(i);
}


size_t CythonPPParser::FunctionDefinitionContext::getRuleIndex() const {
  return CythonPPParser::RuleFunctionDefinition;
}

void CythonPPParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CythonPPParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


std::any CythonPPParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::FunctionDefinitionContext* CythonPPParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 12, CythonPPParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 124) != 0)) {
      setState(62);
      typeSpecifier();
    }
    setState(65);
    match(CythonPPParser::IDENTIFIER);
    setState(66);
    match(CythonPPParser::LPAREN);
    setState(68);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(67);
      parameterList();
      break;
    }

    default:
      break;
    }
    setState(70);
    match(CythonPPParser::RPAREN);
    setState(71);
    match(CythonPPParser::LBRACE);
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1532) != 0)) {
      setState(72);
      statement();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    match(CythonPPParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

CythonPPParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::FunctionCallContext::IDENTIFIER() {
  return getToken(CythonPPParser::IDENTIFIER, 0);
}

tree::TerminalNode* CythonPPParser::FunctionCallContext::LPAREN() {
  return getToken(CythonPPParser::LPAREN, 0);
}

tree::TerminalNode* CythonPPParser::FunctionCallContext::RPAREN() {
  return getToken(CythonPPParser::RPAREN, 0);
}

tree::TerminalNode* CythonPPParser::FunctionCallContext::SEMI() {
  return getToken(CythonPPParser::SEMI, 0);
}

std::vector<CythonPPParser::ExpressionContext *> CythonPPParser::FunctionCallContext::expression() {
  return getRuleContexts<CythonPPParser::ExpressionContext>();
}

CythonPPParser::ExpressionContext* CythonPPParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<CythonPPParser::ExpressionContext>(i);
}


size_t CythonPPParser::FunctionCallContext::getRuleIndex() const {
  return CythonPPParser::RuleFunctionCall;
}

void CythonPPParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void CythonPPParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any CythonPPParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::FunctionCallContext* CythonPPParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 14, CythonPPParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(CythonPPParser::IDENTIFIER);
    setState(81);
    match(CythonPPParser::LPAREN);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7168) != 0)) {
      setState(82);
      expression();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CythonPPParser::T__0) {
        setState(83);
        match(CythonPPParser::T__0);
        setState(84);
        expression();
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(92);
    match(CythonPPParser::RPAREN);
    setState(93);
    match(CythonPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputStatementContext ------------------------------------------------------------------

CythonPPParser::OutputStatementContext::OutputStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::OutputStatementContext::COUT() {
  return getToken(CythonPPParser::COUT, 0);
}

std::vector<tree::TerminalNode *> CythonPPParser::OutputStatementContext::LT_LT() {
  return getTokens(CythonPPParser::LT_LT);
}

tree::TerminalNode* CythonPPParser::OutputStatementContext::LT_LT(size_t i) {
  return getToken(CythonPPParser::LT_LT, i);
}

std::vector<CythonPPParser::ExpressionContext *> CythonPPParser::OutputStatementContext::expression() {
  return getRuleContexts<CythonPPParser::ExpressionContext>();
}

CythonPPParser::ExpressionContext* CythonPPParser::OutputStatementContext::expression(size_t i) {
  return getRuleContext<CythonPPParser::ExpressionContext>(i);
}

tree::TerminalNode* CythonPPParser::OutputStatementContext::SEMI() {
  return getToken(CythonPPParser::SEMI, 0);
}


size_t CythonPPParser::OutputStatementContext::getRuleIndex() const {
  return CythonPPParser::RuleOutputStatement;
}

void CythonPPParser::OutputStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutputStatement(this);
}

void CythonPPParser::OutputStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutputStatement(this);
}


std::any CythonPPParser::OutputStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitOutputStatement(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::OutputStatementContext* CythonPPParser::outputStatement() {
  OutputStatementContext *_localctx = _tracker.createInstance<OutputStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, CythonPPParser::RuleOutputStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(CythonPPParser::COUT);
    setState(96);
    match(CythonPPParser::LT_LT);
    setState(97);
    expression();
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CythonPPParser::LT_LT) {
      setState(98);
      match(CythonPPParser::LT_LT);
      setState(99);
      expression();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(CythonPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

CythonPPParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CythonPPParser::TypeSpecifierContext *> CythonPPParser::ParameterListContext::typeSpecifier() {
  return getRuleContexts<CythonPPParser::TypeSpecifierContext>();
}

CythonPPParser::TypeSpecifierContext* CythonPPParser::ParameterListContext::typeSpecifier(size_t i) {
  return getRuleContext<CythonPPParser::TypeSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> CythonPPParser::ParameterListContext::IDENTIFIER() {
  return getTokens(CythonPPParser::IDENTIFIER);
}

tree::TerminalNode* CythonPPParser::ParameterListContext::IDENTIFIER(size_t i) {
  return getToken(CythonPPParser::IDENTIFIER, i);
}


size_t CythonPPParser::ParameterListContext::getRuleIndex() const {
  return CythonPPParser::RuleParameterList;
}

void CythonPPParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void CythonPPParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any CythonPPParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::ParameterListContext* CythonPPParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 18, CythonPPParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 124) != 0)) {
      setState(107);
      typeSpecifier();
      setState(108);
      match(CythonPPParser::IDENTIFIER);
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CythonPPParser::T__0) {
        setState(109);
        match(CythonPPParser::T__0);
        setState(110);
        typeSpecifier();
        setState(111);
        match(CythonPPParser::IDENTIFIER);
        setState(117);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CythonPPParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CythonPPParser::TypeSpecifierContext::AUTO() {
  return getToken(CythonPPParser::AUTO, 0);
}


size_t CythonPPParser::TypeSpecifierContext::getRuleIndex() const {
  return CythonPPParser::RuleTypeSpecifier;
}

void CythonPPParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CythonPPParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CythonPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


std::any CythonPPParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CythonPPVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CythonPPParser::TypeSpecifierContext* CythonPPParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 20, CythonPPParser::RuleTypeSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 124) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CythonPPParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cythonppParserInitialize();
#else
  ::antlr4::internal::call_once(cythonppParserOnceFlag, cythonppParserInitialize);
#endif
}
