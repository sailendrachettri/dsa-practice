#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); // creating a node pointer and allocating memory in the heap
    n->data = data; // setting the data
    // Setting the left and right children to NULL
    n->left = NULL; 
    n->right = NULL;

    return n; // finally returing the node
}

int main()
{
    /*
    // Constructing the root node without function
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    */

    // Constructing the root node using function -> recommended
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    return 0;
}