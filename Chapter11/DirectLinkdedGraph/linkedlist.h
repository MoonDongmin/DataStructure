#ifndef MOONDONGMIN_LINKEDLIST_H
#define MOONDONGMIN_LINKEDLIST_H
typedef struct LinkedListNodeType {
    int data;
    struct LinkedListNodeType *pLink;
} LinkedListNode;

typedef struct LinkedListType {
    LinkedListNode  headerNode;
    int             currentCount;
} LinkedList;

LinkedList *createLinkedList();
int getLinkedListData(LinkedList* pList, int position);
int addLinkedListData(LinkedList* pList, int position, int data);
int removeLinkedListData(LinkedList* pList, int position);
void deleteLinkedList(LinkedList* pList);
int getLinkedListLength(LinkedList* pList);

#endif //MOONDONGMIN_LINKEDLIST_H
