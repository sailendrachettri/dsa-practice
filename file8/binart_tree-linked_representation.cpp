#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};


int main()
{
    // Constructing the root node
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

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    return 0;
}