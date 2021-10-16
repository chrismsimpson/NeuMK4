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

struct PathTokenizer * createPathTokenizer(
    const struct Scanner * scanner);

struct PathTokenizer * createPathTokenizerFromString(
    const char * source);

///

void deletePathTokenizer(
    struct PathTokenizer * tokenizer);

///

bool isPathTokenizerAtEof(
    const struct PathTokenizer * tokenizer);

#endif