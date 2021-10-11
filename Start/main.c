#include <stdio.h>

#include "Neu/AST/NeuCodeBlockItem.c"
#include "Neu/AST/NeuSourceFile.c"
#include "Neu/Parser/NeuParser.c"

int someFunc();

int main() {

    const struct NeuParser * parser = createNeuParserFromFile("test.txt");

    const struct NeuNode * sourceFile = parseNeuSourceFile(parser);

    deleteNeuNode((struct NeuNode *) sourceFile);

    deleteNeuParser((struct NeuParser *) parser);

    ///

    printf("Completed successfully!\n"); 

    ///

    return 0;
}

int someFunc() {

    return 1;
}