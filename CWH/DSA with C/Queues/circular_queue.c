#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }
    q->r = ((q->r) + 1) % q->size;
    q->arr[q->r] = val;
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
        return a;
    }
    q->f = (q->f + 1) % q->size;
    a = q->arr[q->f];
    return a;
}

void show(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = q->f + 1; i != q->r + 1; i = (i + 1) % q->size)
    {
        printf("Element: %d\n", q->arr[i]);
    }

    printf("End\n\n");
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    show(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    dequeue(&q);
    dequeue(&q);
    show(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    enqueue(&q, 70);
    enqueue(&q, 90);
    enqueue(&q, 100);
    enqueue(&q, 110);
    show(&q);

    return 0;
}