#ifndef NEU_NODE_H
#define NEU_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "NeuCodeBlockItem.h"
#include "NeuSourceFile.h"

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

extern void addNodeToListOfNeuNodes(
    struct ListOfNeuNodes * list,
    const struct NeuNode * node);

///

extern struct ListOfNeuNodes * createEmptyListOfNeuNodes();

///

extern struct NeuNode * createNeuNode(
    const enum NeuNodeType nodeType,
    const void * value);

///

extern void deleteListOfNeuNodes(
    struct ListOfNeuNodes * nodes);

extern void deleteNeuNode(
    struct NeuNode * node);

#endif