#include "NodeStack.h"

void NSInit(NodeStack* ns) {
    ns->top = NULL;
    ns->count = 0;

    return;
}
int NSIsEmpty(NodeStack* ns) {
    if (ns->top == NULL && ns->count == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}
// int IsFull(NodeStack* ns) {
    
// }
int NSPop(NodeStack* ns) {
    int popData = ns->top->data;
    free(ns->top);
    ns->top = ns->top->nextNode;
    ns->count--;

    return popData;
}
void NSPush(NodeStack* ns, int pushData) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = pushData;
    newNode->nextNode = ns->top;
    ns->top = newNode;
    ns->count++;

    return;
}
int NSPeek(NodeStack* ns) {
    return ns->top->data;
}
void NSPrint(NodeStack* ns) {
    Node *temp = ns->top;

    for (int i=0; i<ns->count; i++) {
        printf("%d ", temp->data);
        temp = temp->nextNode;
    }
    printf("\n");

    return;
}
