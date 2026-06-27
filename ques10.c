#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int d) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = d; n->left = n->right = NULL; return n;
}

// Pre-order: Root → Left → Right
void preOrder(struct Node *root) {
    if (root == NULL) return;
    printf("%d ", root->data);   // Visit Root
    preOrder(root->left);        // Traverse Left
    preOrder(root->right);       // Traverse Right
}

int main() {
    /*
         1
        / \
       2   3
      / \
     4   5
    */
    struct Node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);

    printf("Binary Tree Pre-Order Traversal:\n");
    preOrder(root);
    printf("\n");
    return 0;
}