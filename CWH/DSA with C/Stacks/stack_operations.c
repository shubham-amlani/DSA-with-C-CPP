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

void show(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...\n");
        return;
    }
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("Element %d: %d\n", i + 1, ptr->arr[i]);
    }
    printf("End\n\n");
}

void push(struct Stack *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("Stack overflow...\n");
        return;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow...\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void peek(struct Stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0 || i == 0)
    {
        printf("Not a valid position...\n");
    }
    else
        printf("%d", ptr->arr[ptr->top - i + 1]);
}

void stackTop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...");
    }
    else
    {
        printf("%d\n", ptr->arr[ptr->top]);
    }
}

void stackBottom(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...");
    }
    else
    {
        printf("%d\n", ptr->arr[0]);
    }
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    /*
    show(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    show(s);
    pop(s);
    show(s);
    push(s, 15);
    show(s);
    peek(s, 4);
    */
    show(s);
    for (int i = 1; i <= 20; i++)
    {
        push(s, i);
    }
    show(s);
    stackTop(s);
    stackBottom(s);
    return 0;
}