#include "CircularListNode.h"
int main(int argc, char *argv[]){
    CircularList *pList = NULL;

    pList = createCircularList();

    addCircularListData(pList,0,10);
    displayCircularList(pList);
    addCircularListData(pList,0,20);
    displayCircularList(pList);
    addCircularListData(pList,1,30);
    displayCircularList(pList);

    removeCircularListData(pList,2);
    displayCircularList(pList);
    removeCircularListData(pList,1);
    displayCircularList(pList);
    removeCircularListData(pList,0);
    displayCircularList(pList);

    deleteCircularList(pList);

    return 0;
}
