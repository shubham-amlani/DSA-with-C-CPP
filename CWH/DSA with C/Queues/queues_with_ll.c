#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct queue
{
    int size;
    int used;
    struct Node *f, *r;
};

int isEmpty(struct queue *q)
{
    if (q->used == 0)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->used == q->size)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = q->r;
    n->data = val;
    n->next = NULL;
    if (q->f == NULL)
    {
        q->f = q->r = n;
    }
    else
    {
        temp->next = n;
        q->r = n;
    }
    q->used++;
}

void dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow...\n");
        return;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    temp = q->f;
    ptr = temp->next;
    free(temp);
    q->f = ptr;
    q->used--;
}

void show(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue is empty...\n");
        return;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = ptr->f;
    while (temp != NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
    printf("End\n\n");
}

int main()
{
    struct queue *q;
    q->size = 10;
    q = (struct queue *)malloc(q->size * sizeof(struct Node));
    q->used = 0;
    q->f = q->r = NULL;
    show(q);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    show(q);
    dequeue(q);
    show(q);
    return 0;
}