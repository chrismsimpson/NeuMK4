#include "NeuParser.h"

#include "../../SourceLocation.h"

#include "../AST/NeuCodeBlockItem.c"
#include "../AST/NeuNode.c"
#include "../AST/NeuSourceFile.c"
#include "../Tokenizer/NeuTokenizer.c"

struct NeuParser * createNeuParser(
    const struct NeuTokenizer * tokenizer) {

    struct NeuParser * parser;

    if ((parser = malloc(sizeof * parser)) != NULL) {
        
        parser->tokenizer = tokenizer;
    }
  
    return parser;
}

struct NeuParser * createNeuParserFromFile(
    const char * filename) {

    const struct NeuTokenizer * tokenizer = createNeuTokenizerFromFile(filename);

    return createNeuParser(tokenizer);
}

void deleteNeuParser(
    struct NeuParser * parser) {
    
    free(parser);

    parser = NULL;
}

struct NeuNode * parseNeuSourceFile(
    const struct NeuParser * parser) {

    struct SourceLocation start = getNeuTokenizerPosition(parser->tokenizer);

    ///

    struct ListOfNeuNodes * children = createEmptyListOfNeuNodes();

    ///

    struct NeuNode * list = parseNeuCodeBlockItemList(parser);



    return createNeuNode(neuNodeTypeSourceFile, NULL);
}

struct NeuNode * parseNeuCodeBlockItemList(
    const struct NeuParser * parser) {

    struct SourceLocation start = getNeuTokenizerPosition(parser->tokenizer);

    ///



    ///

    return createNeuNode(neuNodeTypeCodeBlockItemList, NULL);
}

