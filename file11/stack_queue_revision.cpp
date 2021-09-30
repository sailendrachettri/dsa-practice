#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void traversalLL(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<"Element is: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top){
    if(top == NULL) return 1;
    return 0;
}

int isFull(struct Node *top){
    struct Node *p = (struct Node *) malloc(sizeof(struct Node));
    if(p == NULL) return 1;
    return 0; 
}

struct Node *push(struct Node *top, int x){
    if(isFull(top)){
        cout<< "Stack Overflow"<<endl;
        return 0;

    } else {
        struct Node *n = (struct Node *) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int main()
{
    struct Node *top = NULL;

    cout<<"isEmpty: "<<isEmpty(top)<<endl;
    cout<<"isFull: "<<isFull(top)<<endl<<endl;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    traversalLL(top);

    cout<<"\nisEmpty: "<<isEmpty(top)<<endl;
    cout<<"isFull: "<<isFull(top)<<endl;

    return 0;
}