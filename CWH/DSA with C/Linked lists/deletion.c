#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Case - 1
struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case - 2
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        ++i;
    }
    q = p;
    p = p->next;
    q->next = p->next;
    free(p);
    return head;
}

// Case - 3
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    q = head;
    struct Node *p = head;
    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
        ++i;
    }
    for (int j = 1; j < i; j++)
    {
        q = q->next;
    }
    q->next = NULL;
    free(p);
    return head;
}

// Case - 4
struct Node *deleteAfterNode(struct Node *head, struct Node *prevNode)
{
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    q = prevNode;
    prevNode = prevNode->next;
    q->next = prevNode->next;
    free(prevNode);
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 10;
    second->next = third;

    // Link third and fourth nodes
    third->data = 44;
    third->next = fourth;

    // Terminate the linked list
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    // head = deleteAtFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAtEnd(head);
    head = deleteAfterNode(head, second);
    linkedListTraversal(head);
    return 0;
}