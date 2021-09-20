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

void preOrder(struct Node *root){
    if(root != NULL){
        cout<< "Data: "<< root->data<<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout<< "Data: "<< root->data<<endl;
        inOrder(root->right);
    }
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
    struct Node *p = createNode(10);
    struct Node *p1 = createNode(15);
    struct Node *p2 = createNode(25);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(30);
    struct Node *p5 = createNode(10);
    struct Node *p6 = createNode(20);
    struct Node *p7 = createNode(70);
    struct Node *p8 = createNode(80);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = NULL;

    p2->left = NULL;
    p2->right = p4;

    p3->left = p5;
    p3->right = p6;

    p4->left = p7;
    p4->right = p8;

    cout<< "\nPre order traversal"<<endl;
    preOrder(p);

    cout<< "\nPost order traversal"<<endl;
    postOrder(p);

    cout<< "\nIn order traversal"<<endl;
    inOrder(p);

    return 0;
}