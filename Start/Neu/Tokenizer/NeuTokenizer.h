#ifndef NEU_TOKENIZER_H
#define NEU_TOKENIZER_H

#include <stdio.h>
#include <stdlib.h>

#include "../../Scanner.h"
#include "../../SourceLocation.h"

#include "../Tokens/NeuToken.h"

struct NeuTokenizer {

    const struct Scanner * scanner;

    const struct ListOfNeuTokens * tokens;

    int index;
};

struct NeuTokenizer * createNeuTokenizer(
    const struct Scanner * scanner);

struct NeuTokenizer * createNeuTokenizerFromFile(
    const char * filename);

struct SourceLocation getNeuTokenizerPosition(
    const struct NeuTokenizer * tokenizer);

#endif