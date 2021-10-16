#ifndef PATH_PARSER_H
#define PATH_PARSER_H

#include <stdio.h>
#include <stdlib.h>

#include "../Tokenizer/PathTokenizer.h"

#include "../Tokens/PathToken.h"

#include "../Path.h"

struct PathParser {

    const struct PathTokenizer * tokenizer;
};

///

struct PathParser * createPathParser(
    const struct PathTokenizer * tokenizer);

struct PathParser * createPathParserFromString(
    const char * source);

///

void deletePathParser(
    struct PathParser * parser);

///

const struct Path * parsePath();

const struct ListOfPathTokens * parsePathTokens(
    const struct PathParser * parser);

#endif