#ifndef MOONDONGMIN_LINKDEDSTACK_H
#define MOONDONGMIN_LINKDEDSTACK_H
typedef struct LinkedStackNodeType
{
    char data;
    struct LinkedStackNodeType* pLink;
} LinkedStackNode;

typedef struct LinkedStackType
{
    int currentCount;
    LinkedStackNode* pTop;
} LinkedStack;

LinkedStack* createLinkedStack();
int pushLS(LinkedStack* pStack, char data);
int isLinkedStackEmpty(LinkedStack* pStack);
LinkedStackNode* popLS(LinkedStack* pStack);
LinkedStackNode* peekLS(LinkedStack* pStack);
void deleteLinkedStack(LinkedStack* pStack);
void displayLinkedStack(LinkedStack *pStack);

#endif //MOONDONGMIN_LINKDEDSTACK_H
