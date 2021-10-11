#ifndef NEU_NODE_H
#define NEU_NODE_H

#include <stdio.h>
#include <stdlib.h>

struct ListOfNeuNodes {

    const struct NeuNode * nodes;

    const int count;
};

enum NeuNodeType {

    neuNodeTypeCodeBlockItem,
    neuNodeTypeCodeBlockItemList,
    neuNodeTypeSourceFile
};

struct NeuNode {

    const enum NeuNodeType nodeType;

    const void * value;
};

///

void addNodeToListOfNeuNodes(
    const struct ListOfNeuNodes * list,
    const struct NeuNode * node);

///

struct ListOfNeuNodes * createEmptyListOfNeuNodes();

///

void deleteListOfNeuNodes(
    struct ListOfNeuNodes * nodes);

void deleteNeuNode(
    struct NeuNode * node);

#endif