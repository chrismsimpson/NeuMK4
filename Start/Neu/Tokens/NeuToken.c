#include "NeuToken.h"

struct SourceLocation getNeuTokenStart(
    const struct NeuToken * token) {
        
    switch (token->tokenType) {

    case neuTokenTypePunc:

        break;

    ///

    default:

        break;
    }

    ///

    struct SourceLocation start = {0, 1, 1};

    return start;
}