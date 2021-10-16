#ifndef NEU_PARSER_H
#define NEU_PARSER_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../SourceLocation.h"

#include "../AST/NeuSourceFile.h"
#include "../AST/NeuCodeBlockItem.h"

#include "../Tokenizer/NeuTokenizer.h"

#include "NeuParser.h"

struct NeuParser {

    const struct NeuTokenizer * tokenizer;
};

///

extern struct NeuParser * createNeuParser(
    const struct NeuTokenizer * tokenizer);

extern struct NeuParser * createNeuParserFromFile( 
    const char * filename);

///

extern void deleteNeuParser(
    struct NeuParser * p);

/// 

extern struct NeuNode * parseNeuSourceFile(
    const struct NeuParser * parser);

extern struct NeuNode * parseNeuCodeBlockItemList(
    const struct NeuParser * parser);

extern struct ListOfNeuNodes * parseNeuCodeBlockItems(
    const struct NeuParser * parser);

#endif