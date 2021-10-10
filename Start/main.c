#include <stdio.h>

// #include "Neu/AST/NeuNode.c"
#include "Neu/AST/NeuSourceFile.c"
#include "Neu/Parser/NeuParser.c"
// #include "Neu/Tokenizer/NeuTokenizer.c"
// #include "Neu/Tokens/NeuToken.c"

int main() {

    const struct NeuParser * parser = createNeuParserFromFile("test.txt");

    const struct NeuSourceFile * sourceFile = parseNeuSourceFile(parser);

    deleteNeuSourceFile((struct NeuSourceFile *) sourceFile); 

    // deleteNeuParser((struct NeuParser *) parser);

    ///

    printf("Completed successfully!\n"); 

    ///

    return 0;
}