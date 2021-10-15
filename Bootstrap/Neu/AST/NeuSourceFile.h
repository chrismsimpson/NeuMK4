#ifndef NEU_SOURCE_FILE_H
#define NEU_SOURCE_FILE_H

#include <stdio.h>
#include <stdlib.h>

#include "../../SourceLocation.h"

#include "NeuNode.h"

struct NeuSourceFile {

    const struct ListOfNeuNodes * children;
    
    const struct SourceLocation start;

    const struct SourceLocation end;
};

///

struct NeuSourceFile * createNeuSourceFile(
    const struct ListOfNeuNodes * nodes,
    const struct SourceLocation start,
    const struct SourceLocation end);

void deleteNeuSourceFile(
    struct NeuSourceFile * sourceFile);

#endif