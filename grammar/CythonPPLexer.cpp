
// Generated from CythonPP.g4 by ANTLR 4.13.2


#include "CythonPPLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CythonPPLexerStaticData final {
  CythonPPLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CythonPPLexerStaticData(const CythonPPLexerStaticData&) = delete;
  CythonPPLexerStaticData(CythonPPLexerStaticData&&) = delete;
  CythonPPLexerStaticData& operator=(const CythonPPLexerStaticData&) = delete;
  CythonPPLexerStaticData& operator=(CythonPPLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cythonpplexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CythonPPLexerStaticData> cythonpplexerLexerStaticData = nullptr;

void cythonpplexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cythonpplexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(cythonpplexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CythonPPLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "AUTO", "CLASS", "COUT", "LT_LT", "IDENTIFIER", 
      "NUMBER", "STRING", "WS", "SEMI", "COLON", "LBRACE", "RBRACE", "LPAREN", 
      "RPAREN", "EQ"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,18,111,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,5,7,72,8,7,10,7,12,7,75,9,7,1,8,4,8,78,
  	8,8,11,8,12,8,79,1,9,1,9,5,9,84,8,9,10,9,12,9,87,9,9,1,9,1,9,1,10,4,10,
  	92,8,10,11,10,12,10,93,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,
  	14,1,15,1,15,1,16,1,16,1,17,1,17,1,85,0,18,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,1,0,
  	4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,
  	10,13,13,32,32,114,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,
  	9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,
  	0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,
  	0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,1,37,1,0,0,0,3,41,1,0,0,0,5,
  	48,1,0,0,0,7,50,1,0,0,0,9,55,1,0,0,0,11,61,1,0,0,0,13,66,1,0,0,0,15,69,
  	1,0,0,0,17,77,1,0,0,0,19,81,1,0,0,0,21,91,1,0,0,0,23,97,1,0,0,0,25,99,
  	1,0,0,0,27,101,1,0,0,0,29,103,1,0,0,0,31,105,1,0,0,0,33,107,1,0,0,0,35,
  	109,1,0,0,0,37,38,5,105,0,0,38,39,5,110,0,0,39,40,5,116,0,0,40,2,1,0,
  	0,0,41,42,5,115,0,0,42,43,5,116,0,0,43,44,5,114,0,0,44,45,5,105,0,0,45,
  	46,5,110,0,0,46,47,5,103,0,0,47,4,1,0,0,0,48,49,5,44,0,0,49,6,1,0,0,0,
  	50,51,5,97,0,0,51,52,5,117,0,0,52,53,5,116,0,0,53,54,5,111,0,0,54,8,1,
  	0,0,0,55,56,5,99,0,0,56,57,5,108,0,0,57,58,5,97,0,0,58,59,5,115,0,0,59,
  	60,5,115,0,0,60,10,1,0,0,0,61,62,5,99,0,0,62,63,5,111,0,0,63,64,5,117,
  	0,0,64,65,5,116,0,0,65,12,1,0,0,0,66,67,5,60,0,0,67,68,5,60,0,0,68,14,
  	1,0,0,0,69,73,7,0,0,0,70,72,7,1,0,0,71,70,1,0,0,0,72,75,1,0,0,0,73,71,
  	1,0,0,0,73,74,1,0,0,0,74,16,1,0,0,0,75,73,1,0,0,0,76,78,7,2,0,0,77,76,
  	1,0,0,0,78,79,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,18,1,0,0,0,81,85,
  	5,34,0,0,82,84,9,0,0,0,83,82,1,0,0,0,84,87,1,0,0,0,85,86,1,0,0,0,85,83,
  	1,0,0,0,86,88,1,0,0,0,87,85,1,0,0,0,88,89,5,34,0,0,89,20,1,0,0,0,90,92,
  	7,3,0,0,91,90,1,0,0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,95,
  	1,0,0,0,95,96,6,10,0,0,96,22,1,0,0,0,97,98,5,59,0,0,98,24,1,0,0,0,99,
  	100,5,58,0,0,100,26,1,0,0,0,101,102,5,123,0,0,102,28,1,0,0,0,103,104,
  	5,125,0,0,104,30,1,0,0,0,105,106,5,40,0,0,106,32,1,0,0,0,107,108,5,41,
  	0,0,108,34,1,0,0,0,109,110,5,61,0,0,110,36,1,0,0,0,5,0,73,79,85,93,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cythonpplexerLexerStaticData = std::move(staticData);
}

}

CythonPPLexer::CythonPPLexer(CharStream *input) : Lexer(input) {
  CythonPPLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cythonpplexerLexerStaticData->atn, cythonpplexerLexerStaticData->decisionToDFA, cythonpplexerLexerStaticData->sharedContextCache);
}

CythonPPLexer::~CythonPPLexer() {
  delete _interpreter;
}

std::string CythonPPLexer::getGrammarFileName() const {
  return "CythonPP.g4";
}

const std::vector<std::string>& CythonPPLexer::getRuleNames() const {
  return cythonpplexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CythonPPLexer::getChannelNames() const {
  return cythonpplexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CythonPPLexer::getModeNames() const {
  return cythonpplexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CythonPPLexer::getVocabulary() const {
  return cythonpplexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CythonPPLexer::getSerializedATN() const {
  return cythonpplexerLexerStaticData->serializedATN;
}

const atn::ATN& CythonPPLexer::getATN() const {
  return *cythonpplexerLexerStaticData->atn;
}




void CythonPPLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cythonpplexerLexerInitialize();
#else
  ::antlr4::internal::call_once(cythonpplexerLexerOnceFlag, cythonpplexerLexerInitialize);
#endif
}
