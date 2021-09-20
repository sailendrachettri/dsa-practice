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

void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<< "Data: "<< root->data<<endl;
    }
}

int main()
{

    // Constructing the root node using function -> recommended
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    postOrder(p);

    return 0;
}