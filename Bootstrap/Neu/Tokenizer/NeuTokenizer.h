#ifndef NEU_TOKENIZER_H
#define NEU_TOKENIZER_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../../Scanner.h"
#include "../../SourceLocation.h"

#include "../Tokens/NeuToken.h"

struct NeuTokenizer {

    const struct Scanner * scanner;

    const struct ListOfNeuTokens * tokenList;

    int rawPosition;
};

///

extern struct NeuTokenizer * createNeuTokenizer(
    const struct Scanner * scanner);

extern struct NeuTokenizer * createNeuTokenizerFromFile(
    const char * filename);

///

extern struct SourceLocation getNeuTokenizerPosition(
    const struct NeuTokenizer * tokenizer);

///

extern bool isNeuTokenizerAtEof(
    const struct NeuTokenizer * tokenizer);

///

extern struct NeuToken * peekNeuToken(
    struct NeuTokenizer * tokenizer);

extern struct NeuToken * rawNextNeuToken(
    struct NeuTokenizer * tokenizer);

#endif