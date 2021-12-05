#ifndef __ARRAYSTACK__
#define __ARRAYSTACK__


#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct _ArrayStack {
    int *data;
    int top;
    int size;
} ArrayStack;

void ASInit(ArrayStack* as);
int ASIsEmpty(ArrayStack* as);
int ASIsFull(ArrayStack* as);
int ASPop(ArrayStack* as);
void ASPush(ArrayStack* as, int pushData);
int ASPeek(ArrayStack* as);
void ASPrint(ArrayStack* as);


#endif