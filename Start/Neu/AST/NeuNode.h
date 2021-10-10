#ifndef NEU_NODE_H
#define NEU_NODE_H

#include <stdio.h>
#include <stdlib.h>

enum NeuNodeType {

    neuNodeTypeSourceFile
};

struct NeuNode {

    const enum NeuNodeType nodeType;

    const void * value;
};

struct ListOfNeuNodes {

    const struct NeuNode * nodes;

    const int count;
};

///

struct ListOfNeuNodes * createEmptyListOfNeuNodes();

void deleteListOfNeuNodes(
    struct ListOfNeuNodes * nodes);

#endif