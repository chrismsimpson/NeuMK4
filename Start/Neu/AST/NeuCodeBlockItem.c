#include "NeuCodeBlockItem.h"

struct ListOfNeuCodeBlockItems * createEmptyListOfNeuCodeBlockItems() {

    struct ListOfNeuCodeBlockItems * itemList;

    if ((itemList = malloc(sizeof * itemList)) != NULL) {

        itemList->items = NULL;
        * (int *) &itemList->count = 0;
    }

    return itemList;
}

struct NeuCodeBlockItem * createNeuCodeBlockItem(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end) {

    struct NeuCodeBlockItem * codeBlockItem;

    if ((codeBlockItem = malloc(sizeof * codeBlockItem)) != NULL) {

        codeBlockItem->children = children;
        * (struct SourceLocation *) &codeBlockItem->start = start;
        * (struct SourceLocation *) &codeBlockItem->end = end;
    }

    return codeBlockItem;
}

///

void deleteNeuCodeBlockItem(
    struct NeuCodeBlockItem * item) {

    ///

    free(item);

    item = NULL;
}

void deleteNeuCodeBlockItemList(
    struct NeuCodeBlockItemList * itemList) {

    ///

    free(itemList);

    itemList = NULL;
}