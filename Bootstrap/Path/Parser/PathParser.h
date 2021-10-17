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

extern struct PathParser * createPathParser(
    const struct PathTokenizer * tokenizer);

extern struct PathParser * createPathParserFromString(
    const char * source);

///

extern void deletePathParser(
    struct PathParser * parser);

///

extern const struct Path * parsePath();

extern const struct ListOfPathTokens * parsePathTokens(
    const struct PathParser * parser);

///



#endif