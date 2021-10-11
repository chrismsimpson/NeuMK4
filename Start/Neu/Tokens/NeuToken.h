#ifndef NEU_TOKEN_H
#define NEU_TOKEN_H

#include <stdio.h>
#include <stdlib.h>

#include "../../SourceLocation.h"

enum NeuTokenType {

    neuTokenTypePunc
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

struct ListOfNeuTokens * createEmptyListOfNeuTokens();

///

void deleteListOfNeuTokens(
    struct ListOfNeuTokens * tokenList);

///

struct SourceLocation getNeuTokenStart(
    const struct NeuToken * token);

#endif