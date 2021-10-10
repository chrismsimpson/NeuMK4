#ifndef NEU_TOKEN_H
#define NEU_TOKEN_H

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

struct SourceLocation getNeuTokenStart(
    const struct NeuToken * token);

#endif