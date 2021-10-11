#include <stdio.h>

#include "Neu/Parser/NeuParser.c"

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