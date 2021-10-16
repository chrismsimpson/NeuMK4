#ifndef PATH_PUNC_H
#define PATH_PUNC_H

#include "../../SourceLocation.h"

enum PathPuncType {

    pathPuncTypeSlash,
    pathPuncTypeBackslash
};

struct PathPunc {

    const enum PathPuncType * puncType;

    const char * source;

    const struct SourceLocation start;

    const struct SourceLocation end;
};

#endif