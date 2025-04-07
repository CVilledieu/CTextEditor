#include <stdio.h>

struct Node {
    int index;
    int length;
    struct Node *left;
    struct Node *right;
    char data[256];
};


struct Node * NewNode(int i, char d) {
    struct Node n = {i, sizeof(d), NULL, NULL, d};
    return &n;
}

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



int main(void) {
 
    

    return 0;
}