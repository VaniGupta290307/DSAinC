#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        printf("Stack overflow");
    }
}
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("stack is empty");
    }
}
int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    isFull(s);
    isEmpty(s);
    return 0;
}
