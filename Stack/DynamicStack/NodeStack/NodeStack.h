#ifndef __NODESTACK__
#define __NODESTACK__


#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct _Node {
    int data;
    struct _Node *nextNode;
} Node;
typedef struct _NodeStack {
    Node *top;
    int count;
} NodeStack;

void NSInit(NodeStack* ns);
int NSIsEmpty(NodeStack* ns);
// void NSIsFull(NodeStack* ns);
int NSPop(NodeStack* ns);
void NSPush(NodeStack* ns, int pushData);
int NSPeek(NodeStack* ns);
void NSPrint(NodeStack* ns);


#endif
