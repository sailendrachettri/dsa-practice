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
    if (root != NULL)
    {
        cout<<root->data<< " ";
        preOrder(root->left);
        preOrder(root->right);
    } 
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout<<root->data<< " ";
        inOrder(root->right);
    }
}

void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<< root->data<<" ";
    }
}

int main()
{
   struct Node *p = createNode(25);
   struct Node *p1 = createNode(20);
   struct Node *p2 = createNode(36);
   struct Node *p3 = createNode(10);
   struct Node *p4 = createNode(22);
   struct Node *p5 = createNode(30);
   struct Node *p6 = createNode(40);
   struct Node *p7 = createNode(5);
   struct Node *p8 = createNode(12);
   struct Node *p9 = createNode(28);
   struct Node *p10 = createNode(38);
   struct Node *p11 = createNode(48);

   p->left = p1;
   p->right = p2;

   p1->left = p3;
   p1->right = p4;

   p2->left = p5;
   p2->right = p6;

   p3->left = p7;
   p3->right = p8;

   p4->left = NULL;
   p4->right = NULL;

   p5->left = p9;
   p5->right = NULL;

   p6->left = p10;
   p6->right = p11;

   cout<< "PreOrder Traversal: ";
   preOrder(p);

   cout<< "\nInOrder Traversal: ";
   inOrder(p);

   cout<< "\nPostOrder Traversal: ";
   postOrder(p);
   cout<<endl;

    return 0;
}