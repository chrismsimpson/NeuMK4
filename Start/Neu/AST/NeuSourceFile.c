#include "NeuSourceFile.h"

void deleteNeuSourceFile(
    struct NeuSourceFile * sourceFile) {

    free(sourceFile);

    sourceFile = NULL;
}