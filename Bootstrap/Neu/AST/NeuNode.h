#ifndef NEU_NODE_H
#define NEU_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListOfNeuNodes {

    const struct NeuNode * nodes;

    const int length;
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
    struct ListOfNeuNodes * list,
    const struct NeuNode * node);

///

struct ListOfNeuNodes * createEmptyListOfNeuNodes();

///

void deleteListOfNeuNodes(
    struct ListOfNeuNodes * nodes);

void deleteNeuNode(
    struct NeuNode * node);

#endif