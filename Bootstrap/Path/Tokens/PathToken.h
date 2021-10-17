#ifndef PATH_TOKEN_H
#define PATH_TOKEN_H

#include <stdio.h>

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

///

extern void addTokenToListOfPathTokens(
    struct ListOfPathTokens * tokenList,
    const struct PathToken * token);

///

extern struct ListOfPathTokens * createEmptyListOfPathTokens();

///

extern void deleteListOfPathTokens(
    struct ListOfPathTokens * tokenList);

///

extern const struct SourceLocation getPathTokenStart(
    const struct PathToken * token);

#endif