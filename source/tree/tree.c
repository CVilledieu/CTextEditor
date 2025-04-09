#include <stdio.h>

typedef struct {
    int length;
    Node *left;
    Node *right;
    char data[256];
} Node;

typedef struct {
    Node * Head;
    int length;
    struct Rope (*newRope)();
}Rope;

int insertLeftNode(Node * root, Node * newNode){
    root->left = newNode;
    return newNode->length;
}

int insertRightNode(Node * root, Node * newNode) {
    root->right = newNode;
    return newNode->length;
}

int insert(Node * root, Node * newNode) {
    if (root->left == NULL){
        root->left = newNode;
        root->length = newNode->length;
    } else if (root->right == NULL) {
        root->right = newNode;
        root->length += newNode->length;
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

struct Rope* newRope(){
    Rope* rope;
    rope->length = 0;
    rope->Head = NULL;
    return rope;
}