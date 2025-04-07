#include <stdio.h>

struct Node {
    int length;
    struct Node *left;
    struct Node *right;
    char data[256];
};


void insert(struct Node * root, struct Node * newNode) {
    if ((*root).index < (*newNode).index) {
        if ((*root).right == NULL) {
            (*root).right = newNode;
            return;
        } else {
            insert((*root).right, newNode);
            return;
        }
    } else if ((*root).left == NULL) {
        (*root).left = newNode;
        return;
    } else {
        insert((*root).left, newNode);
        return;
    }   
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