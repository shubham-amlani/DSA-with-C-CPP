#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int used;
    struct Node *top;
    int *arr;
};

struct Node
{
    int data;
    struct Node *next;
    int index;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->size == ptr->used)
    {
        return 1;
    }
    return 0;
}

void show(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...\n");
        return;
    }
    struct Node *top = ptr->top;
    for (int i = 1; i <= ptr->used; i++)
    {
        printf("Element %d: %d\n", i, top->data);
        top = top->next;
    }
    printf("\nEnd\n\n");
}

void push(struct Stack *ptr, int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Stack));
    struct Node *top = ptr->top;
    if (isFull(ptr))
    {
        printf("Stackoverflow...\n");
        return;
    }
    if (ptr->top == NULL)
    {
        node->index = 1;
    }
    else
    {
        node->index = top->index + 1;
    }
    node->data = data;
    node->next = ptr->top;
    ptr->top = node;
    ptr->used++;
}

void pop(struct Stack *ptr)
{
    struct Node *top = ptr->top;
    ptr->top = top->next;
    ptr->used--;
    free(top);
}

void stackTop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...\n");
        return;
    }

    struct Node *top = ptr->top;
    printf("Top of the stack: %d\n", top->data);
}

void stackBottom(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty...\n");
        return;
    }
    struct Node *top = ptr->top;

    while (top->next != NULL)
    {
        top = top->next;
    }
    printf("Bottom of the stack: %d\n", top->data);
}

void peek(struct Stack *ptr, int index)
{
    struct Node *top = ptr->top;
    if (top->index - index + 1 < 0 || index == 0)
    {
        printf("Not a valid position...\n");
    }
    else
        for (int i = 1; i < index; i++)
        {
            top = top->next;
        }
    printf("%d", top->data);
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 50;
    s->used = 0;
    s->top = NULL;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for (int i = 1; i <= s->size; i++)
    {
        push(s, i);
    }
    show(s);
    pop(s);
    show(s);
    stackTop(s);
    stackBottom(s);
    peek(s, 10);
    return 0;
}