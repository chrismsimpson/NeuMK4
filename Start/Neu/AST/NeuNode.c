#include "NeuNode.h"

struct ListOfNeuNodes * createEmptyListOfNeuNodes() {

    struct ListOfNeuNodes * nodes;

    if ((nodes = malloc(sizeof * nodes)) != NULL) {

        * (int *) &nodes->count = 0;
    }

    return nodes;
}

void deleteListOfNodes(
    struct ListOfNodes * nodes) {

    free(nodes);

    nodes = NULL;
}