#ifndef NEU_KEYWORD_H
#define NEU_KEYWORD_H

#include "../../SourceLocation.h"

enum NeuKeywordType {

    neuKeywordTypeFunc,
    neuKeywordTypeReturn
};

struct NeuKeyword {

    enum NeuKeywordType neuKeywordType;

    const char * source;

    const struct SourceLocation start;

    const struct SourceLocation end;
};

#endif