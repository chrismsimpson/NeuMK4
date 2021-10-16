#include "NeuToken.h"

struct ListOfNeuTokens * createEmptyListOfNeuTokens() {

    struct ListOfNeuTokens * tokens;

    if ((tokens = malloc(sizeof * tokens)) != NULL) {

        tokens->tokens = NULL;

        * (int *) &tokens->count = 0;
    }

    return tokens;
}

///

void deleteListOfNeuTokens(
    struct ListOfNeuTokens * tokenList) {

    free(tokenList);

    tokenList = NULL;
}

///

struct SourceLocation getNeuTokenStart(
    const struct NeuToken * token) {
        
    switch (token->tokenType) {

    case neuTokenTypePunc:

        // struct Neu

        break;

    ///

    case neuTokenTypeKeyword:

        break;

    ///

    default:

        break;
    }

    ///

    struct SourceLocation start = {0, 1, 1};

    return start;
}