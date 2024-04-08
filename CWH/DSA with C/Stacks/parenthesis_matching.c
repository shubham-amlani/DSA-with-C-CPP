#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    char *arr;
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
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char stackTop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        return '`';
    }
    else
    {
        return ptr->arr[ptr->top];
    }
}

int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    char *str = (char *)malloc(500 * sizeof(char));
    printf("Enter your expression: ");
    gets(str);
    s->size = strlen(str);
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(int));
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(s, str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            char val;
            val = pop(s);
            if (val == -1)
            {
                printf("Exiting...\n");
                return 0;
            }
            if (!match(val, str[i]))
            {
                printf("Parenthesis in this expression are unbalanced by %d characters\n", s->top + 1);
                return 0;
            }
                }
        else
        {
            continue;
        }
    }
    if (isEmpty(s))
    {
        printf("Parenthesis in this expression are balanced.\n");
    }
    else
    {
        printf("Parenthesis in this expression are unbalanced by %d characters\n", s->top + 1);
    }
    return 0;
}