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

struct Node *searchingElementRecursice(struct Node *root, int key){
    if(root == NULL) return NULL;

    if(root->data == key) return root;
    else if(root->data > key) return searchingElementRecursice(root->left, key);

    else return searchingElementRecursice(root->right, key);
}

struct Node *searchingElementIterative(struct Node *root, int key){
    while (root != NULL)
    {
        if(key == root->data) return root;
        else if(key < root->data) root = root->left;
        else root = root->right;
    }
    return NULL;    
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

    // struct Node *n = searchingElementRecursice(p, 38);
    struct Node *n = searchingElementIterative(p, 22);
    if(n != NULL) cout<< "Element Found: "<<n->data<<endl;
    else cout<< "Element Not Found"<<endl;

    return 0;
}