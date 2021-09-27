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

struct Node *inOrderPredecessor(struct Node *root){
    root = root->left;

    while(root->right != NULL) root = root->right;

    return root;
}

struct Node *deletionBST(struct Node *root, int value){
    struct Node  *iPre;
    if(root == NULL) return NULL;

    if(root->left == NULL and root->right == NULL){
        free(root);
        return NULL;
    }    

    // search for the node to be deleted
    if(value < root->data) root->left = deletionBST(root->left, value);
    
    else if(value > root->data) root->right = deletionBST(root->right, value);

    // deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deletionBST(root->left, iPre->data);
    }
    return root;
}

struct Node * searchingElement(struct Node *root, int key){
    while(root != NULL){
        if(key == root->data) return root;

        else if(key < root->data) root = root->left;

        else root = root->right;
    }

    return NULL;
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout<< root->data<<" ";
        inOrder(root->right);
    }
}

int main()
{

    // Constructing the root node using function -> recommended
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

    // Linking the root node with left and right children
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

    deletionBST(p, 25);

    // struct Node * n = searchingElement(p, 13);
    // if(n != NULL) cout<< "Found: "<<n->data<<endl;

    // else cout<< "Element not found"<<endl;

    inOrder(p);
    cout<< ""<<endl;
    return 0;
}