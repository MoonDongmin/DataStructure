#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct LinkedListNodeType{
    int data;
    struct LinkedListNodeType *pLink;
}LinkedListNode;

typedef struct LinkedListType{
    int currentCount;
    LinkedListNodeType headerNode;
}LinkedList;

LinkedList *createLinkedList(){
    LinkedList *pReturn = (LinkedList *)malloc(sizeof (LinkedList));
    memset(pReturn, 0, sizeof (LinkedList)); //할당된 메모리를 0으로 초기화
    return pReturn;
}

int getLinkedListData(LinkedList *pList, int position){
    int i=0;

    LinkedListNode *pCurrentNode = &(pList->headerNode);
    for(i=0; i<=position; i++){
        pCurrentNode = pCurrentNode->pLink;
    }
    return pCurrentNode -> data;
}

int addLinkedListData(LinkedList *pList, int position, int data){
    int i=0;
    LinkedListNode *pNewNode = NULL;
    LinkedListNode *pPreNode = NULL;
    pNewNode = (LinkedListNode *)malloc(sizeof (LinkedListNode));
    pNewNode->data=data;

    pPreNode = &(pList->headerNode);
    for(i=0; i<position; i++){
        pPreNode = pPreNode->pLink;
    }

    pNewNode->pLink = pPreNode->pLink;
    pPreNode->pLink = pNewNode;
    pList->currentCount++;
    return 0;
}

int removeLinkedListData(LinkedList *pList, int position){
    int i=0;
    LinkedListNode *pDelNode = NULL;
    LinkedListNode *pPreNode = NULL;

    pPreNode = &(pList->headerNode);
    for(i=0; i<position; i++){
        pPreNode = pPreNode->pLink;
    }

    pDelNode = pPreNode->pLink;
    pPreNode->pLink = pDelNode->pLink;

    free(pDelNode);
    pList->currentCount--;
    return 0;
}

void deleteLinkedList(LinkedList *pList){
    LinkedListNode *pDelNode = NULL;
    LinkedListNode *pPreNode = pList->headerNode.pLink;
    while(pPreNode != NULL){
        pDelNode = pPreNode;
        pPreNode = pPreNode->pLink;

        free(pDelNode);
    }
    free(pList);
}

int getLinkedListLength(LinkedList *pList){
    if(NULL != pList){
        return pList->currentCount;
    }
    return 0;
}

void displayList(LinkedList *pList){
    int i=0;
    for(i=0; i<pList->currentCount; i++){
        printf_s("[%d],%d\n",i, getLinkedListData(pList,i));
    }
}

void iterateLinkedList(LinkedList *pList){
    int count = 0;
    LinkedListNode *pNode = NULL;

    pNode = pList->headerNode.pLink;
    while(pNode != NULL){
        printf_s("[%d],%d\n",count,pNode->data);
        count++;
        pNode = pNode->pLink;
    }
    printf_s("node's count: %d\n",count);
}

void concatLinkedList(LinkedList *pListA, LinkedList *pListB){
    LinkedListNode *pNodeA = NULL;
    if(pListA != NULL && pListB != NULL){
        pNodeA = pListA->headerNode.pLink;
        while(pNodeA !=NULL && pNodeA->pLink != NULL){
            pNodeA = pNodeA->pLink;
        }
        pNodeA->pLink = pListB->headerNode.pLink;
        pListB->headerNode.pLink=NULL;
    }
}