#include "DoublyListNodeType.h"
int main(int args, char *argv[]){
    DoublyList *pList = pList = createDoublyList();

    if(pList != NULL){
        addDoublyListData(pList,0,10);
        addDoublyListData(pList,1,20);
        addDoublyListData(pList,1,30);
        displayDoublyList(pList);

        removeDoublyListData(pList,0);
        displayDoublyList(pList);

        deleteDoublyList(pList);
    }
    return 0;
}