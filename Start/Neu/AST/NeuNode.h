#ifndef NEU_NODE_H
#define NEU_NODE_H

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

#endif