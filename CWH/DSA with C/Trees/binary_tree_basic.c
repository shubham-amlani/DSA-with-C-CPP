// Linked representation of a Binary tree and preOrder, postOrder and inOrder traversal of a binary tree.
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

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
/*
     4
    / \
   1   6
  / \
 5   2
   */

int main()
{
    // Constructing the root node
    /*
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    // Constructing the second node
    struct node *n1;
    n1 = (struct node *)malloc(sizeof(struct node));
    n1->data = 2;
    n1->left = NULL;
    n1->right = NULL;

    // Constructing the third node
    struct node *n2;
    n2 = (struct node *)malloc(sizeof(struct node));
    n2->data = 4;
    n2->left = NULL;
    n2->right = NULL;
    // Linking the root node with left and right children
    root->left = n1;
    root->right = n2;
*/
    // Creating node with a Function (Recommended)
    struct node *root = createNode(7);
    struct node *left1 = createNode(2);
    struct node *right1 = createNode(1);
    struct node *left2 = createNode(0);
    struct node *right2 = createNode(4);
    root->left = left1;
    root->right = right1;
    left1->right = right2;
    left1->left = left2;

    /*
      4
     / \
    1   6
   / \
  5   2
    */

    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    inOrder(root);

    return 0;
}