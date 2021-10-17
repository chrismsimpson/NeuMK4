#include "PathTokenizer.h"

const struct PathToken * rawGetNextPathToken(
    struct PathTokenizer * tokenizer);

///

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

//

const struct PathToken * getNextPathToken(
    struct PathTokenizer * tokenizer) {

    if (tokenizer->rawPosition + 1 <= tokenizer->tokenList->length) {

        struct PathToken * token = (struct PathToken *) &tokenizer->tokenList->tokens[tokenizer->rawPosition];

        tokenizer->rawPosition += 1;

        return token;
    }
    
    ///

    if (isScannerAtEof(tokenizer->scanner)) {

        return NULL;
    }

    ///

    const struct PathToken * next = rawGetNextPathToken(tokenizer);

    

    ///

    return NULL;
}

const struct PathToken * rawGetNextPathToken(
    struct PathTokenizer * tokenizer) {

    return NULL;
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

const bool isPathTokenizerAtEof(
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