#ifndef NEU_PUNC_H
#define NEU_PUNC_H

#include "../../SourceLocation.h"

enum NeuPuncType {

    neuPuncTypeLeftParen,
    neuPuncTypeRightParen,

    neuPuncTypeLeftBrace,
    neuPuncTypeRightBrace,

    neuPuncTypeSemicolon,
    neuPuncTypeComma
};

struct NeuPunc {

    enum NeuPuncType neuPuncType;

    const char * source;

    const struct SourceLocation start;

    const struct SourceLocation end;
};

#endif