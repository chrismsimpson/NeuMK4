#include "NeuParser.h"

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

    struct NeuNode * itemList = parseNeuCodeBlockItemList(parser);

    addNodeToListOfNeuNodes(children, itemList);

    ///

    struct NeuSourceFile * sourceFile = createNeuSourceFile(
        children, 
        start, 
        getNeuTokenizerPosition(parser->tokenizer));

    ///

    return createNeuNode(neuNodeTypeSourceFile, sourceFile);
}

struct NeuNode * parseNeuCodeBlockItemList(
    const struct NeuParser * parser) {

    struct SourceLocation start = getNeuTokenizerPosition(parser->tokenizer);

    ///

    struct ListOfNeuNodes * items = parseNeuCodeBlockItems(parser);

    ///

    struct NeuCodeBlockItemList * itemList = createNeuCodeBlockItemList(items, start, getNeuTokenizerPosition(parser->tokenizer));

    ///

    return createNeuNode(neuNodeTypeCodeBlockItemList, itemList);
}

struct ListOfNeuNodes * parseNeuCodeBlockItems(
    const struct NeuParser * parser) {

    struct ListOfNeuNodes * list = createEmptyListOfNeuNodes();

    ///

    bool done = false;

    while (!isNeuTokenizerAtEof(parser->tokenizer) && done) {

        

    }

    ///

    return list;
}