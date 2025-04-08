#include <stdio.h>

struct Node {
    int length;
    struct Node *left;
    struct Node *right;
    char data[256];
};


void rebalanceTree(struct Node * treeRoot) {

}

int insert(struct Node * root, struct Node * newNode) {
    if (root->left == NULL){
        root->left = newNode;
        root->length = newNode->length;
    } else {

    }
    int lLen = 0;
    int rLen = 0;
    if (root->left != NULL){
        lLen = root->left->length;
    }
    if (root->right != NULL){
        rLen = root->right->length;
    }
    return (lLen + rLen);
}


struct Node * newLeaf(char dataArray){
    if (sizeof(dataArray) > 256) {
        return NULL;
    }
    struct Node leaf;
    
}

struct Node * newBranch(struct Node * LLeaf, struct Node * RLeaf){
    struct Node root;
    root.length = (*LLeaf).length + (*RLeaf).length; 
    root.left = LLeaf;
    root.right = RLeaf;

    return &root;
}

struct Node * newRoot(struct Node * LNode, struct Node * RNode) {
    struct Node root;
    root.length = (*LNode).length + (*RNode).length;
    root.left = LNode;
    root.right = RNode;

    return &root;
}