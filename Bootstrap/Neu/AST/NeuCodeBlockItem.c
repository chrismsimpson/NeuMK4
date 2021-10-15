#include "NeuCodeBlockItem.h"

struct ListOfNeuCodeBlockItems * createEmptyListOfNeuCodeBlockItems() {

    struct ListOfNeuCodeBlockItems * list;

    if ((list = malloc(sizeof * list)) != NULL) {

        list->items = NULL;
        * (int *) &list->count = 0;
    }

    return list;
}

struct NeuCodeBlockItem * createNeuCodeBlockItem(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end) {

    struct NeuCodeBlockItem * item;

    if ((item = malloc(sizeof * item)) != NULL) {

        item->children = children;
        * (struct SourceLocation *) &item->start = start;
        * (struct SourceLocation *) &item->end = end;
    }

    return item;
}

struct NeuCodeBlockItemList * createNeuCodeBlockItemList(
    const struct ListOfNeuNodes * children,
    const struct SourceLocation start,
    const struct SourceLocation end) {

    struct NeuCodeBlockItemList * itemList;

    if ((itemList = malloc(sizeof * itemList)) != NULL) {

        itemList->children = children;
        * (struct SourceLocation *) &itemList->start = start;
        * (struct SourceLocation *) &itemList->end = end;
    }

    return itemList;
}

///

void deleteListOfNeuCodeBlockItems(
    struct ListOfNeuCodeBlockItems * list) {

    for (size_t i = 1; i <= list->count; i++) {

        struct NeuCodeBlockItem * item = (struct NeuCodeBlockItem *) &list->items[i - 1];

        deleteNeuCodeBlockItem(item);        
    }
    
    ///

    free(list);

    list = NULL;
}

void deleteNeuCodeBlockItem(
    struct NeuCodeBlockItem * item) {

    deleteListOfNeuNodes((struct ListOfNeuNodes *) item->children);

    ///

    free(item);

    item = NULL;
}

void deleteNeuCodeBlockItemList(
    struct NeuCodeBlockItemList * itemList) {

    deleteListOfNeuNodes((struct ListOfNeuNodes *) itemList->children);

    ///

    free(itemList);

    itemList = NULL;
}