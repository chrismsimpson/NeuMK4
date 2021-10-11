#include "NeuTokenizer.h"

#include "../../Scanner.c"

#include "../Tokens/NeuToken.c"

struct NeuTokenizer * createNeuTokenizer(
    const struct Scanner * scanner) {

    struct NeuTokenizer * tokenizer;

    if ((tokenizer = malloc(sizeof * tokenizer)) != NULL) {
        
        tokenizer->scanner = scanner;

        tokenizer->tokenList = createEmptyListOfNeuTokens();

        tokenizer->index = 0;
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

    if (tokenizer->index + 1 <= tokenizer->tokenList->count) {

        return getNeuTokenStart(&tokenizer->tokenList->tokens[tokenizer->index]);
    }

    ///

    return getScannerPosition(tokenizer->scanner);
}