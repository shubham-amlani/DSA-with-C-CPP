/*
Binary Search Tree
->Each node has a maximum of up to two children.
->For each node, the values of its left descendent nodes are less than that of the current node, which in turn is less than the right descendent nodes (if any).
->InOrder traversal gives ascending order
eg:
       7
      / \
     5   9
    / \   \
   3   6   12
          /  \
         10   14

*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
int main()
{
    struct node *root = createNode(7);
    struct node *root_l = createNode(5);
    struct node *root_r = createNode(9);
    struct node *root_l_l = createNode(3);
    struct node *root_l_r = createNode(6);
    struct node *root_r_r = createNode(12);
    struct node *root_r_r_l = createNode(10);
    struct node *root_r_r_r = createNode(14);

    root->left = root_l;
    root->right = root_r;
    root_l->left = root_l_l;
    root_l->right = root_l_r;
    root_r->right = root_r_r;
    root_r_r->right = root_r_r_r;
    root_r_r->left = root_r_r_l;

    /*
       7
      / \
     5   9
    / \   \
   3   6   12
          /  \
         10   14
    */
    struct node *n = search(root, 14);
    if (n != NULL)
    {
        printf("Element found: %d", n->data);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}