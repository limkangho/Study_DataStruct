#include "ArrayStack.h"

void ASInit(ArrayStack* as) {
    as->top = 0;
    as->size = 1;
    as->data = (int *)malloc(sizeof(int)*(as->size));
    
    return;
}
int ASIsEmpty(ArrayStack* as) {
    if (as->data == NULL && as->top == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}
int ASIsFull(ArrayStack* as) {
    if (as->data != NULL && as->top+1 == as->size) {
        return TRUE;
    } else {
        return FALSE;
    }
}
int ASPop(ArrayStack* as) {
    int popData = as->data[as->top];
    as->data[as->top] = 0;
    as->top--;
    
    return popData;
}
void ASPush(ArrayStack* as, int pushData) {
    if (as->top+1 > as->size) {
        as->size *= 2;
        as->data = (int *)realloc(as->data, sizeof(int)*(as->size));
    }
    as->data[as->top+1] = pushData;
    as->top++;
    
    return ;
}
int ASPeek(ArrayStack* as) {
    return as->data[as->top];
}
void ASPrint(ArrayStack* as) {
    int temp = as->data[as->top];
    
    for (int i=as->top-1; i>=0; i--) {
        printf("%d ", temp);
        temp = as->data[i];
    }
    printf("\n");
    
    return ;
}