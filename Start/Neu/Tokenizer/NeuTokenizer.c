#include "NeuTokenizer.h"

#include "../../Scanner.c"

#include "../Tokens/NeuToken.c"

struct NeuTokenizer * createNeuTokenizer(
    const struct Scanner * scanner) {

    struct NeuTokenizer * tokenizer;

    if ((tokenizer = malloc(sizeof * tokenizer)) != NULL)
    {
        tokenizer->scanner = scanner;
    }

    return tokenizer;
}

struct NeuTokenizer * createNeuTokenizerFromFile(
    const char * filename) {

    struct Scanner * scanner = createScannerFromFile(filename);

    return createNeuTokenizer(scanner);
}

void deleteNeuTokenizer(
    struct NeuTokenizer * tokenizer) {

    free(tokenizer);

    tokenizer = NULL;
}

struct SourceLocation getNeuTokenizerPosition(
    const struct NeuTokenizer * tokenizer) {

    if (tokenizer->index + 1 <= tokenizer->tokens->count)
    {
        return getNeuTokenStart(&tokenizer->tokens->tokens[tokenizer->index]);
    }

    ///

    return getScannerPosition(tokenizer->scanner);
}