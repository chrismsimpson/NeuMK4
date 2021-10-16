#ifndef PATH_H
#define PATH_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "Tokens/PathToken.h"

struct Path {

    const struct ListOfPathTokens * tokenList;
};

///

extern struct Path * createPath(
    const struct ListOfPathTokens * tokenList);

///

extern void deletePath(
    struct Path * path);

///

extern const struct Path * getCurrentDirectoryPath();

#endif