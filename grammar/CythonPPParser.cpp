
// Generated from CythonPP.g4 by ANTLR 4.13.2


#include "CythonPPListener.h"

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
      "classDeclaration", "functionDefinition", "functionCall", "outputStatement"
    },
    std::vector<std::string>{
      "", "'int'", "'string'", "','", "'auto'", "'class'", "'cout'", "'<<'", 
      "", "", "", "", "';'", "':'", "'{'", "'}'", "'('", "')'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "AUTO", "CLASS", "COUT", "LT_LT", "IDENTIFIER", "NUMBER", 
      "STRING", "WS", "SEMI", "COLON", "LBRACE", "RBRACE", "LPAREN", "RPAREN", 
      "EQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,18,97,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,31,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,
  	1,5,1,5,5,5,50,8,5,10,5,12,5,53,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,5,
  	6,63,8,6,10,6,12,6,66,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,5,7,75,8,7,10,7,
  	12,7,78,9,7,3,7,80,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,5,8,90,8,8,10,
  	8,12,8,93,9,8,1,8,1,8,1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,2,2,0,1,2,4,4,
  	1,0,8,10,98,0,21,1,0,0,0,2,30,1,0,0,0,4,32,1,0,0,0,6,38,1,0,0,0,8,43,
  	1,0,0,0,10,45,1,0,0,0,12,56,1,0,0,0,14,69,1,0,0,0,16,84,1,0,0,0,18,20,
  	3,2,1,0,19,18,1,0,0,0,20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,1,
  	1,0,0,0,23,21,1,0,0,0,24,31,3,4,2,0,25,31,3,6,3,0,26,31,3,10,5,0,27,31,
  	3,12,6,0,28,31,3,14,7,0,29,31,3,16,8,0,30,24,1,0,0,0,30,25,1,0,0,0,30,
  	26,1,0,0,0,30,27,1,0,0,0,30,28,1,0,0,0,30,29,1,0,0,0,31,3,1,0,0,0,32,
  	33,7,0,0,0,33,34,5,8,0,0,34,35,5,18,0,0,35,36,3,8,4,0,36,37,5,12,0,0,
  	37,5,1,0,0,0,38,39,5,8,0,0,39,40,5,18,0,0,40,41,3,8,4,0,41,42,5,12,0,
  	0,42,7,1,0,0,0,43,44,7,1,0,0,44,9,1,0,0,0,45,46,5,5,0,0,46,47,5,8,0,0,
  	47,51,5,14,0,0,48,50,3,2,1,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,
  	0,51,52,1,0,0,0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,15,0,0,55,11,1,0,
  	0,0,56,57,5,4,0,0,57,58,5,8,0,0,58,59,5,16,0,0,59,60,5,17,0,0,60,64,5,
  	14,0,0,61,63,3,2,1,0,62,61,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,
  	1,0,0,0,65,67,1,0,0,0,66,64,1,0,0,0,67,68,5,15,0,0,68,13,1,0,0,0,69,70,
  	5,8,0,0,70,79,5,16,0,0,71,76,3,8,4,0,72,73,5,3,0,0,73,75,3,8,4,0,74,72,
  	1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,80,1,0,0,0,78,76,
  	1,0,0,0,79,71,1,0,0,0,79,80,1,0,0,0,80,81,1,0,0,0,81,82,5,17,0,0,82,83,
  	5,12,0,0,83,15,1,0,0,0,84,85,5,6,0,0,85,86,5,7,0,0,86,91,3,8,4,0,87,88,
  	5,7,0,0,88,90,3,8,4,0,89,87,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,91,92,
  	1,0,0,0,92,94,1,0,0,0,93,91,1,0,0,0,94,95,5,12,0,0,95,17,1,0,0,0,7,21,
  	30,51,64,76,79,91
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
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 374) != 0)) {
      setState(18);
      statement();
      setState(23);
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
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(25);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(26);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(27);
      functionDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(28);
      functionCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(29);
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

tree::TerminalNode* CythonPPParser::VariableDeclarationContext::AUTO() {
  return getToken(CythonPPParser::AUTO, 0);
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
    setState(32);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 22) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(33);
    match(CythonPPParser::IDENTIFIER);
    setState(34);
    match(CythonPPParser::EQ);
    setState(35);
    expression();
    setState(36);
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
    setState(38);
    match(CythonPPParser::IDENTIFIER);
    setState(39);
    match(CythonPPParser::EQ);
    setState(40);
    expression();
    setState(41);
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
    setState(43);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0))) {
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
    setState(45);
    match(CythonPPParser::CLASS);
    setState(46);
    match(CythonPPParser::IDENTIFIER);
    setState(47);
    match(CythonPPParser::LBRACE);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 374) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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

tree::TerminalNode* CythonPPParser::FunctionDefinitionContext::AUTO() {
  return getToken(CythonPPParser::AUTO, 0);
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
    setState(56);
    match(CythonPPParser::AUTO);
    setState(57);
    match(CythonPPParser::IDENTIFIER);
    setState(58);
    match(CythonPPParser::LPAREN);
    setState(59);
    match(CythonPPParser::RPAREN);
    setState(60);
    match(CythonPPParser::LBRACE);
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 374) != 0)) {
      setState(61);
      statement();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
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
    setState(69);
    match(CythonPPParser::IDENTIFIER);
    setState(70);
    match(CythonPPParser::LPAREN);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0)) {
      setState(71);
      expression();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CythonPPParser::T__2) {
        setState(72);
        match(CythonPPParser::T__2);
        setState(73);
        expression();
        setState(78);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(81);
    match(CythonPPParser::RPAREN);
    setState(82);
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
    setState(84);
    match(CythonPPParser::COUT);
    setState(85);
    match(CythonPPParser::LT_LT);
    setState(86);
    expression();
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CythonPPParser::LT_LT) {
      setState(87);
      match(CythonPPParser::LT_LT);
      setState(88);
      expression();
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    match(CythonPPParser::SEMI);
   
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
