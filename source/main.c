#include <stdio.h>


struct Node {
    int TotalLength;
    struct Node *Left;
    struct Node *Right;
    struct Leaf *Data;
};

struct Leaf {
    char Data[256];
};

struct Node NewNode() {
    struct Node n = {0};
    return n;
}


int main(void) {


    return 0;
}