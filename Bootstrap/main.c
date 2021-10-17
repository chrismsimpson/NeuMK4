#include <limits.h>
#include <stdio.h>
#include <unistd.h>

#include "Neu/Parser/NeuParser.h"

int main() {

    ///

    const struct NeuParser * parser = createNeuParserFromFile("test.txt");

    const struct NeuNode * sourceFile = parseNeuSourceFile(parser);

    deleteNeuNode((struct NeuNode *) sourceFile);

    deleteNeuParser((struct NeuParser *) parser);

    ///

    printf("Completed successfully!\n"); 

    ///

    return 0;
}