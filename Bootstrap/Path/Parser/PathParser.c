#include "PathParser.h"

struct PathParser * createPathParser(
    const struct PathTokenizer * tokenizer) {

    struct PathParser * parser;

    if ((parser = malloc(sizeof * parser)) != NULL) {

        parser->tokenizer = tokenizer;
    }

    return parser;
}

struct PathParser * createPathParserFromString(
    const char * source) {

    const struct PathTokenizer * tokenizer = createPathTokenizerFromString(source);

    return createPathParser(tokenizer);
}

///

void deletePathParser(
    struct PathParser * parser) {

    ///

    free(parser);

    parser = NULL;
}

///

const struct Path * parsePath() {

    // struct ListOfPathTokens * tokenList = 

    return NULL;
}

const struct ListOfPathTokens * parsePathTokens(
    const struct PathParser * parser) {

    struct ListOfPathTokens * tokenList = createEmptyListOfPathTokens();

    return NULL;
}