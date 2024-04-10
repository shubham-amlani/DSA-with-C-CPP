#include <stdio.h>
#include <stdlib.h>

struct DEqueue
{
    int size;
    int f, r;
    int *arr;
};

int isFull(struct DEqueue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct DEqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueueR(struct DEqueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }
    q->r++;
    q->arr[q->r] = val;
}

void enqueueF(struct DEqueue *q, int val)
{
    if (isFull(q) || q->f == -1)
    {
        printf("Queue is full from front\n");
        return;
    }
    q->arr[q->f] = val;
    q->f--;
}

int dequeueF(struct DEqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
        return a;
    }
    q->f++;
    a = q->arr[q->f];
    return a;
}

int dequeueR(struct DEqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
        return a;
    }
    a = q->arr[q->r];
    q->r--;
    return a;
}

void show(struct DEqueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = q->f + 1; i <= q->r; i++)
    {
        printf("Element: %d\n", q->arr[i]);
    }

    printf("End\n\n");
}

int main()
{
    struct DEqueue *q;
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    show(q);
    enqueueR(q, 10);
    enqueueR(q, 20);
    enqueueR(q, 30);
    dequeueF(q);
    enqueueF(q, 10);
    show(q);
    return 0;
}