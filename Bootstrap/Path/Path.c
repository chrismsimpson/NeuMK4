#include "Path.h"

struct Path * createPath(
    const struct ListOfPathTokens * tokenList) {

    struct Path * path;

    if ((path = malloc(sizeof * path)) != NULL) {

        path->tokenList = tokenList;
    }

    return path;
}

///

void deletePath(
    struct Path * path) {

    ///

    free(path);

    path = NULL;
}

///

const struct Path * getCurrentDirectoryPath() {

    char currentDirectory[PATH_MAX];

    getcwd(currentDirectory, sizeof(currentDirectory));

    ///

    

    ///

    return NULL;
}