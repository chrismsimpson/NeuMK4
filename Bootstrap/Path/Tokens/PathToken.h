#ifndef PATH_TOKEN_H
#define PATH_TOKEN_H

#include "../../SourceLocation.h"

enum PathTokenType {

    pathTokenTypeComponent,
    pathTokenTypePunc
};

struct PathToken {

    const enum PathTokenType tokenType;

    void * value;
};

struct ListOfPathTokens {

    const struct PathToken * tokens;

    const int length;
};

struct ListOfPathTokens * createEmptyListOfPathTokens();

///

void deleteListOfPathTokens(
    struct ListOfPathTokens * tokenList);

///

struct SourceLocation getPathTokenStart(
    const struct PathToken * token);

#endif