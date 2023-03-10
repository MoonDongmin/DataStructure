//
// Created by MoonDongMin on 2023-01-04.
//

#ifndef MOONDONGMIN_EXPRLINKEDSTACK_H
#define MOONDONGMIN_EXPRLINKEDSTACK_H
typedef enum PrecedenceType { lparen, rparen, multiply, divide, plus, minus,
    operand } Precedence;

typedef struct ExprTokenType {
    double      value;
    Precedence  type;
} ExprToken;

typedef struct LinkedStackNodeType
{
    ExprToken data;
    struct LinkedStackNodeType* pLink;
} LinkedStackNode;

typedef struct LinkedStackType
{
    int currentCount;
    struct LinkedStackNodeType* pTop;
} LinkedStack;

LinkedStack* createLinkedStack();
int pushLS(LinkedStack* pStack, ExprToken data);
int isLinkedStackEmpty(LinkedStack* pStack);
LinkedStackNode* popLS(LinkedStack* pStack);
LinkedStackNode* peekLS(LinkedStack* pStack);
void deleteLinkedStack(LinkedStack* pStack);
void displayLinkedStack(LinkedStack *pStack);



#endif //MOONDONGMIN_EXPRLINKEDSTACK_H
