#include "NeuParser.h"

#include "../Tokenizer/NeuTokenizer.c"

struct NeuParser * createNeuParser(
    const struct NeuTokenizer * tokenizer) {

    struct NeuParser * parser;

    if ((parser = malloc(sizeof * parser)) != NULL)
    {
        parser->tokenizer = tokenizer;
    }
  
    return parser;
}

struct NeuParser * createNeuParserFromFile(
    const char * filename) {

    const struct NeuTokenizer * tokenizer = createNeuTokenizerFromFile(filename);

    return NULL;
}

void deleteNeuParser(
    struct NeuParser * parser) {
    
    free(parser);

    parser = NULL;
}

struct NeuSourceFile * parseNeuSourceFile(
    const struct NeuParser * parser)
{
    

    return NULL;
}