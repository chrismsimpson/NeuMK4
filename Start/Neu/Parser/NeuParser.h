#ifndef NEU_PARSER_H
#define NEU_PARSER_H

#include <stdio.h>
#include <stdlib.h>

#include "../AST/NeuSourceFile.h"
#include "../AST/NeuCodeBlockItem.h"
#include "../Tokenizer/NeuTokenizer.h"

#include "NeuParser.h"

struct NeuParser {

    const struct NeuTokenizer * tokenizer;
};

struct NeuParser * createNeuParser(
    const struct NeuTokenizer * tokenizer);

struct NeuParser * createNeuParserFromFile(
    const char * filename);

void deleteNeuParser(
    struct NeuParser * p);

struct NeuNode * parseNeuSourceFile(
    const struct NeuParser * parser);

struct NeuNode * parseNeuCodeBlockItemList(
    const struct NeuParser * parser);

#endif