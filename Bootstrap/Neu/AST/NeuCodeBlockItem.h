#ifndef NEU_CODE_BLOCK_ITEM_H
#define NEU_CODE_BLOCK_ITEM_H

#include <stdio.h>
#include <stdlib.h>

#include "../../SourceLocation.h"

#include "NeuNode.h"

struct ListOfNeuCodeBlockItems {

    const struct NeuCodeBlockItem * items;

    const int count;
};

struct NeuCodeBlockItem {

    const struct ListOfNeuNodes * children;
    const struct SourceLocation start;
    const struct SourceLocation end;
};

struct NeuCodeBlockItemList {

    const struct ListOfNeuNodes * children;
    const struct SourceLocation start;
    const struct SourceLocation end;
};

///

struct ListOfNeuCodeBlockItems * createEmptyListOfNeuCodeBlockItems();

struct NeuCodeBlockItem * createNeuCodeBlockItem(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end);

struct NeuCodeBlockItemList * createNeuCodeBlockItemList(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end);

///

void deleteListOfNeuCodeBlockItems(
    struct ListOfNeuCodeBlockItems * list);

void deleteNeuCodeBlockItem(
    struct NeuCodeBlockItem * item);

void deleteNeuCodeBlockItemList(
    struct NeuCodeBlockItemList * itemList);

#endif