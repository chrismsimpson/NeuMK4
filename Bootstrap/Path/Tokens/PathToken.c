#include "PathToken.h"

void addTokenToListOfPathTokens(
    struct ListOfPathTokens * tokenList,
    const struct PathToken * token) {

    
}

///

struct ListOfPathTokens * createEmptyListOfPathTokens() {

    return NULL;
}

///

void deleteListOfPathTokens(
    struct ListOfPathTokens * tokenList) {

}

///

const struct SourceLocation getPathTokenStart(
    const struct PathToken * token) {

    switch (token->tokenType) {

    case pathTokenTypePunc:

        break;

    ///

    case pathTokenTypeComponent:

        break;

    ///

    default:

        break; 
    }

    ///

    struct SourceLocation start = {0, 1, 1};

    return start;
}