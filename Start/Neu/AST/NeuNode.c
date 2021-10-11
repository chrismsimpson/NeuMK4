#include "NeuNode.h"

void addNodeToListOfNeuNodes(
    const struct ListOfNeuNodes * list,
    const struct NeuNode * node) {

}

///

struct ListOfNeuNodes * createEmptyListOfNeuNodes() {

    struct ListOfNeuNodes * nodes;

    if ((nodes = malloc(sizeof * nodes)) != NULL) {

        nodes->nodes = NULL;
        * (int *) &nodes->count = 0;
    }

    return nodes;
}

struct NeuNode * createNeuNode(
    const enum NeuNodeType nodeType,
    const void * value) {

    struct NeuNode * node;

    if ((node = malloc(sizeof * node)) != NULL) {

        * (enum NeuNodeType *) &node->nodeType = nodeType;
        node->value = value;
    }

    return node;
}

///

void deleteListOfNeuNodes(
    struct ListOfNeuNodes * nodes) {

    free(nodes);

    nodes = NULL;
}

void deleteNeuNode(
    struct NeuNode * node) {

    switch (node->nodeType) {

    case neuNodeTypeCodeBlockItem:

        break;

    case neuNodeTypeCodeBlockItemList:

        break;
    
    case neuNodeTypeSourceFile:

        deleteNeuSourceFile((struct NeuSourceFile *) node->value);

        break;
    }

    ///

    free(node);

    node = NULL;
}
