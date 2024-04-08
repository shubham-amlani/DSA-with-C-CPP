#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void traverseForthAndBack(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        if (ptr->next == NULL)
        {
            break;
        }
        ptr = ptr->next;
    }
    printf("\nReached End\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
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

    // Add data to all the nodes
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    // Linking all the nodes as DLL
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    head->prev = NULL;
    second->prev = head;
    third->prev = second;
    fourth->prev = third;

    traverseForthAndBack(head);
    return 0;
}