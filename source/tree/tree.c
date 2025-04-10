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
    struct Rope (*newBranch)();
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

Node* insertNewNode(Node* Root, Node* Leaf){
    if (Root->right == NULL) {
        Root->right = Leaf;
        Root->length += Leaf->length;
        return Root;
    } 
    if (Root->right->data){

    }
    return Root;

}

struct Rope* newRope(){
    Rope* rope;
    rope->length = 0;
    rope->Head = NULL;
    return rope;
}

struct Node* AddLeaf(char data[]){
    int maxSize = 8;
    if (sizeof(char) > maxSize) {
        Node* left = AddLeaf(data[0]);
    }
}