

#include <stdio.h>
#include <stdlib.h>

// Definition of the tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Pre-order traversal function
void preOrderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    // Print the data of the node
    printf("%d ", node->data);

    // Recursively traverse the left subtree
    preOrderTraversal(node->left);

    // Recursively traverse the right subtree
    preOrderTraversal(node->right);
}

// Example usage
int main() {
    // Creating a simple tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Pre-order traversal of the binary tree is:\n");
    preOrderTraversal(root);

    return 0;
}
