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

int isOperator(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        return 1;
    default:
        return 0;
    }
}

int prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
    case '%':
        return 2;
    default:
        return 0;
    }
}

char *inToPo(char *infix)
{
    int len = strlen(infix);
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = len;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((sp->size + 1) * sizeof(char)); // Extra space for '\0'
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (prec(infix[i]) > prec(stackTop(sp)))
            {
                push(sp, infix[i]);
            }
            else
            {
                while (prec(infix[i]) <= prec(stackTop(sp)))
                {
                    postfix[j] = pop(sp);
                    j++;
                }
                push(sp, infix[i]);
            }
            i++;
        }
    }

    // Pop remaining operators from stack
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0'; // Null terminate the postfix expression
    free(sp->arr);
    free(sp);
    return postfix;
}

int main()
{
    char *str = "a+b+c/d";
    printf("%s", inToPo(str));
    return 0;
}