#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circularTraversal(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    int i = 1;
    /*
    while (ptr->next != head)
    {
        printf("Element %d: %d\n", i, ptr->data);
        ptr = ptr->next;
        ++i;
    }
    printf("Element %d: %d\n", i + 1, ptr->data);
    */

    do
    {
        printf("Element %d: %d\n", i, ptr->data);
        ++i;
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    q = head;
    p = head;
    ptr = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = head->next;
    head = ptr;
    free(q);
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

    // Add data to all nodes

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    // Link all the nodes in a circular linked list
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    // Traversing the circular linked list
    circularTraversal(head);

    // Inserting operations
    head = insertAtFirst(head, 80);
    circularTraversal(head);
    head = deleteAtFirst(head);
    circularTraversal(head);
    return 0;
}