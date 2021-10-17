#ifndef PATH_TOKENIZER_H
#define PATH_TOKENIZER_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../../Scanner.h"
#include "../../SourceLocation.h"

#include "../Tokens/PathToken.h"

struct PathTokenizer {

    const struct Scanner * scanner;

    const struct ListOfPathTokens * tokenList;

    int rawPosition;
};

///

extern struct PathTokenizer * createPathTokenizer(
    const struct Scanner * scanner);

extern struct PathTokenizer * createPathTokenizerFromString(
    const char * source);

///

extern void deletePathTokenizer(
    struct PathTokenizer * tokenizer);

///

extern const struct PathToken * getNextPathToken(
    struct PathTokenizer * tokenier);

///

extern struct SourceLocation getPathTokenizerPosition(
    const struct PathTokenizer * tokenizer);


///

extern const bool isPathTokenizerAtEof(
    const struct PathTokenizer * tokenizer);

#endif