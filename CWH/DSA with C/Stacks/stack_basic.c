#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

void push(struct Stack *ptr, int data)
{
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    /*
    for (int i = 0; i < s->size; i++)
    {
        s->arr[i] = i + 1;
        ++s->top;
    }

    s->arr[0] = 1;
    ++s->top;
    s->arr[1] = 2;
    ++s->top;
    s->arr[2] = 3;
    ++s->top;
    s->arr[3] = 4;
    ++s->top;
    s->arr[4] = 5;
    ++s->top;
    s->arr[5] = 6;
    ++s->top;
    s->arr[6] = 7;
    ++s->top;
    s->arr[7] = 8;
    ++s->top;
    s->arr[8] = 9;
    ++s->top;
    s->arr[9] = 10;
    ++s->top;

    if (isFull(s))
        printf("Stack is full\n");
    else
        printf("Stack is not full\n");

    if (isEmpty(s))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
    return 0;
    */
}