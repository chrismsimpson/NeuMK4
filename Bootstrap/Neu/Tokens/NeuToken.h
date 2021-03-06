#ifndef NEU_TOKEN_H
#define NEU_TOKEN_H

#include <stdio.h>
#include <stdlib.h>

#include "../../SourceLocation.h"

enum NeuTokenType {

    neuTokenTypePunc,
    neuTokenTypeKeyword
};

struct NeuToken {

    const enum NeuTokenType tokenType;

    void * value;
};

struct ListOfNeuTokens {

    const struct NeuToken * tokens;

    const int count;
};

///

extern struct ListOfNeuTokens * createEmptyListOfNeuTokens();

///

extern void deleteListOfNeuTokens(
    struct ListOfNeuTokens * tokenList);

///

extern struct SourceLocation getNeuTokenStart(
    const struct NeuToken * token);

#endif