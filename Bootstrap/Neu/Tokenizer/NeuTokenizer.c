#include "NeuTokenizer.h"

#include "../../Scanner.c"

#include "../Tokens/NeuToken.c"

struct NeuTokenizer * createNeuTokenizer(
    const struct Scanner * scanner) {

    struct NeuTokenizer * tokenizer;

    if ((tokenizer = malloc(sizeof * tokenizer)) != NULL) {
        
        tokenizer->scanner = scanner;

        tokenizer->tokenList = createEmptyListOfNeuTokens();

        tokenizer->rawPosition = 0;
    }

    return tokenizer;
}

struct NeuTokenizer * createNeuTokenizerFromFile(
    const char * filename) {

    struct Scanner * scanner = createScannerFromFile(filename);

    return createNeuTokenizer(scanner);
}

///

void deleteNeuTokenizer(
    struct NeuTokenizer * tokenizer) {

    deleteScanner((struct Scanner *) tokenizer->scanner);

    deleteListOfNeuTokens((struct ListOfNeuTokens *) tokenizer->tokenList);

    ///

    free(tokenizer);

    tokenizer = NULL;
}

///

struct SourceLocation getNeuTokenizerPosition(
    const struct NeuTokenizer * tokenizer) {

    if (tokenizer->rawPosition + 1 <= tokenizer->tokenList->count) {

        return getNeuTokenStart(&tokenizer->tokenList->tokens[tokenizer->rawPosition]);
    }

    ///

    return getScannerPosition(tokenizer->scanner);
}

///

bool isNeuTokenizerAtEof(
    const struct NeuTokenizer * tokenizer) {

    struct SourceLocation tokenizerPosition = getNeuTokenizerPosition(tokenizer);

    struct SourceLocation scannerPosition = getScannerPosition(tokenizer->scanner);

    ///

    if (tokenizerPosition.rawPosition == scannerPosition.rawPosition) {

        return isScannerAtEof(tokenizer->scanner);
    }

    ///

    return false; 
}

///

struct NeuToken * peekNeuToken(
    struct NeuTokenizer * tokenizer) {

    if (tokenizer->rawPosition + 1 <= tokenizer->tokenList->count) {
        
        return (struct NeuToken *) &tokenizer->tokenList->tokens[tokenizer->rawPosition];
    }

    ///

    if (isScannerAtEof(tokenizer->scanner)) {

        return NULL;
    }

    ///

    

    return NULL;
}

struct NeuToken * rawNextNeuToken(
    struct NeuTokenizer * tokenizer) {

    return NULL;
}