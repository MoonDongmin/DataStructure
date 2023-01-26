#include <stdio.h>
#include "stdlib.h"
#include "string.h"

typedef struct ArrayStackNodeType{
    int data;
}ArrayStackNode;

typedef struct ArrayStackType{
    int maxCount;
    int currentCount;
    ArrayStackNode *pData;
}ArrayStack;

ArrayStack * createArrayStack(int size){
    ArrayStack *pReturn = NULL;
    pReturn = (ArrayStack *)malloc(sizeof(ArrayStack));
    memset(pReturn,0,sizeof(ArrayStack));
    pReturn -> maxCount = size;

    pReturn->pData=(ArrayStackNode *)malloc(sizeof(ArrayStackNode)*size);
    memset(pReturn->pData,0,sizeof(ArrayStackNode)*size);

    return pReturn;
}

int isArrayStackFull(ArrayStack *pStack){
    int ret = 0;
    if(pStack !=NULL){
        if(pStack->currentCount == pStack->maxCount){
            ret = 1;
        }
    }
    return ret;
}

int pushAS(ArrayStack *pStack, int data){
    int ret = 0;
    if(isArrayStackFull(pStack)==0){
        pStack->pData[pStack->currentCount].data = data;
        pStack->currentCount++;
        ret = 1;
    }else{
        printf_s("error, Stack is Full,pushAS()\n");
    }
    return ret;
}

int isArrayStackEmpty(ArrayStack *pStack){
    int ret = 0;

    if(pStack!=NULL){
        if(pStack->currentCount==0){
            ret = 1;
        }
    }
    return ret;
}

ArrayStackNode *popAS(ArrayStack *pStack){
    ArrayStackNode *pReturn = NULL;
    if(0==isArrayStackEmpty(pStack)){
        pReturn = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
        if(pReturn!=NULL){
            pReturn->data = pStack->pData[pStack->currentCount-1].data;
            pStack->currentCount--;
        }else{
            printf_s("error,popAS()");
        }
    }
    return pReturn;
}

ArrayStackNode *peekAS(ArrayStack *pStack){
    ArrayStackNode *pReturn = NULL;
    if(pStack !=NULL){
        if(isArrayStackEmpty(pStack)==0){
            pReturn = &(pStack->pData[pStack->currentCount-1]);
        }
    }
    return pReturn;
}

void deleteArrayStack(ArrayStack *pStack){
    if(pStack != NULL){
        if(pStack->pData != NULL){
            free(pStack->pData);
        }
        free(pStack);
    }
}

void displayArrayStack(ArrayStack *pStack){
    int i=0;
    if(pStack !=NULL){
        int size = pStack->maxCount;
        int top = pStack->currentCount;

        printf_s("Stack Size: %d, Now Node's count: %d\n",pStack->maxCount,pStack->currentCount);
        for(i = size-1; i>= top; i--){
            printf_s("[%d]-[Empty]\n",i);
        }
        for(i = top-1; i>=0; i--){
            printf_s("[%d]-[%d]\n",i,pStack->pData[i].data);
        }
    }
}

int main(){
    ArrayStack *pStack = NULL;
    ArrayStackNode *pNode = NULL;

    pStack = createArrayStack(6);
    if(pStack != NULL){
        pushAS(pStack,10);
        pushAS(pStack,20);
        pushAS(pStack,30);
        pushAS(pStack,40);
        displayArrayStack(pStack);

        pNode = popAS(pStack);
        if(pNode != NULL){
            printf_s("pop price-[%d]\n",pNode->data);
            free(pNode);
        }

        displayArrayStack(pStack);

        pNode = peekAS(pStack);
        if(pNode != NULL){
            printf_s("peek price-[%d}\n",pNode->data);
        }
        displayArrayStack(pStack);

        displayArrayStack(pStack);
    }
    return 0;
}