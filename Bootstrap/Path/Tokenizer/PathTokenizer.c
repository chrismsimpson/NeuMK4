#include "PathTokenizer.h"

// #include "../../Scanner.c"

// #include "../Tokens/PathToken.c"

struct PathTokenizer * createPathTokenizer(
    const struct Scanner * scanner) {

    struct PathTokenizer * tokenizer;

    if ((tokenizer = malloc(sizeof * tokenizer)) != NULL) {

        tokenizer->scanner = scanner;
    }

    return tokenizer;
}

struct PathTokenizer * createPathTokenizerFromString(
    const char * source) {

    return NULL;
}

///

void deletePathTokenizer(
    struct PathTokenizer * tokenizer) {

    ///

    free(tokenizer);

    tokenizer = NULL;
}

///

struct SourceLocation getPathTokenizerPosition(
    const struct PathTokenizer * tokenizer) {

    if (tokenizer->rawPosition + 1 <= tokenizer->tokenList->length) {

        getPathTokenStart(&tokenizer->tokenList->tokens[tokenizer->rawPosition]);
    }

    ///

    return getScannerPosition(tokenizer->scanner);
}

///

bool isPathTokenizerAtEof(
    const struct PathTokenizer * tokenizer) {

    struct SourceLocation tokenizerPosition = getPathTokenizerPosition(tokenizer);

    struct SourceLocation scannerPosition = getScannerPosition(tokenizer->scanner);

    ///

    if (tokenizerPosition.rawPosition == scannerPosition.rawPosition) {

        return isScannerAtEof(tokenizer->scanner);
    }

    ///

    return false;
}