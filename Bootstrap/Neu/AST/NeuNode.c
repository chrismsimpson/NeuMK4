#include "NeuNode.h"

void addNodeToListOfNeuNodes(
    struct ListOfNeuNodes * list,
    const struct NeuNode * node) {

    int newLength = list->length + 1;

    struct NeuNode * newNodes;

    if ((newNodes = malloc(newLength * sizeof * node)) != NULL) {

        if (list->length > 0) {

            memcpy(newNodes, list->nodes, list->length);
        }

        ///

        struct NeuNode * last = &newNodes[list->length];

        last = (struct NeuNode *) node;

        ///

        list->nodes = newNodes;
        * (int *) &list->length = newLength;
    }
}

///

struct ListOfNeuNodes * createEmptyListOfNeuNodes() {

    struct ListOfNeuNodes * nodes;

    if ((nodes = malloc(sizeof * nodes)) != NULL) {

        nodes->nodes = NULL;
        * (int *) &nodes->length = 0;
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

        deleteNeuCodeBlockItem((struct NeuCodeBlockItem *) node->value);

        break;

    ///

    case neuNodeTypeCodeBlockItemList:

        deleteNeuCodeBlockItemList((struct NeuCodeBlockItemList *) node->value);

        break;

    ///
    
    case neuNodeTypeSourceFile:

        deleteNeuSourceFile((struct NeuSourceFile *) node->value);

        break;
    }

    ///

    free(node);

    node = NULL;
}
