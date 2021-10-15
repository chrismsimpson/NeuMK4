#include "NeuSourceFile.h"

struct NeuSourceFile * createNeuSourceFile(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end) {

    struct NeuSourceFile * sourceFile;

    if ((sourceFile = malloc(sizeof * sourceFile)) != NULL) {
        
        sourceFile->children = children;
        
        * (struct SourceLocation *) &sourceFile->start = start;

        * (struct SourceLocation *) &sourceFile->end = end;
    }

    return sourceFile;
}

void deleteNeuSourceFile(
    struct NeuSourceFile * sourceFile) {

    

    ///

    free(sourceFile);

    sourceFile = NULL;
}