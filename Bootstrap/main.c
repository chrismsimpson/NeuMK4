#include <limits.h>
#include <stdio.h>
#include <unistd.h>

#include "Common/String.h"

// #include "Path/Path.h"
// #include "Path/Tokens/PathPunc.h"

// #include "Path/Tokenizer/PathTokenizer.h"

#include "Path/Parser/PathParser.h"

#include "Neu/Parser/NeuParser.c"

int main() {

    char currentDirectory[PATH_MAX];

    getcwd(currentDirectory, sizeof(currentDirectory));

    printf("Current directory: %s\n", currentDirectory);

    const struct NeuParser * parser = createNeuParserFromFile("test.txt");

    const struct NeuNode * sourceFile = parseNeuSourceFile(parser);

    deleteNeuNode((struct NeuNode *) sourceFile);

    deleteNeuParser((struct NeuParser *) parser);

    ///

    printf("Completed successfully!\n"); 

    ///

    return 0;
}