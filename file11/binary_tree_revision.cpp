#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void preOrder(struct Node *root){
    if(root != NULL){
        cout<< "Data: "<<root->data<<endl;
        preOrder(root->left);        
        preOrder(root->right); 
    }
}

void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<< "Data: "<<root->data<<endl;
    }
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout<< "Data: "<<root->data<<endl;
        inOrder(root->right);
    }
}

int main()
{
    struct Node *p = createNode(10);
    struct Node *p1 = createNode(15);
    struct Node *p2 = createNode(25);
    struct Node *p3 = createNode(2);

    struct Node *p4 = createNode(30);
    struct Node *p5 = createNode(10);
    struct Node *p6 = createNode(20);
    struct Node *p7 = createNode(70);
    struct Node *p8 = createNode(80);

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

    cout<< "PreOrder of binary tree: "<<endl;
    preOrder(p);

    cout<< "\nPostOrder of binary tree: "<<endl;
    postOrder(p);

    cout<< "\nInOrder of binary tree: "<<endl;
    inOrder(p);


    return 0;
}