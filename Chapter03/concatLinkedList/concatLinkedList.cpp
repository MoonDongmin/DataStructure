#include "concatLinkedList.h"
#include "stdio.h"

int main(int argc, char *agv[]){
    LinkedList *pListA = NULL;
    LinkedList *pListB = NULL;

    pListA = createLinkedList();
    pListB = createLinkedList();
    addLinkedListData(pListA,0,10);
    addLinkedListData(pListA,1,20);
    addLinkedListData(pListA,2,30);
    addLinkedListData(pListB,0,40);
    addLinkedListData(pListB,1,50);

    printf_s("Before\n");
    printf_s("A\n");
    iterateLinkedList(pListA);
    printf_s("B\n");
    iterateLinkedList(pListB);

    concatLinkedList(pListA, pListB);
    printf_s("After\n");
    printf_s("A\n");
    iterateLinkedList(pListA);
    printf_s("B\n");
    iterateLinkedList(pListB);

    deleteLinkedList(pListA);
    deleteLinkedList(pListB);

    return 0;

}
