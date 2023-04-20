#include <stdio.h>
#include <stdbool.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // If both trees are empty, they are the same
    if (p == NULL && q == NULL) {
        return true;
    }
    // If only one of the trees is empty, they are not the same
    if (p == NULL || q == NULL) {
        return false;
    }
    // If the values of the root nodes are not equal, they are not the same
    if (p->val != q->val) {
        return false;
    }
    // Recursively check if the left and right subtrees are the same
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    // Create two binary trees
    struct TreeNode *p = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    p->val = 1;
    p->left = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    p->left->val = 2;
    p->left->left = NULL;
    p->left->right = NULL;
    p->right = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    p->right->val = 3;
    p->right->left = NULL;
    p->right->right = NULL;

    struct TreeNode *q = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    q->val = 1;
    q->left = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    q->left->val = 2;
    q->left->left = NULL;
    q->left->right = NULL;
    q->right = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    q->right->val = 3;
    q->right->left = NULL;
    q->right->right = NULL;

    // Check if the two trees are the same
    if (isSameTree(p, q)) {
        printf("The two binary trees are the same.\n");
    } else {
        printf("The two binary trees are not the same.\n");
    }

    return 0;
}
