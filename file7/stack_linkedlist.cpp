#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL){
        cout<< "Element is "<<ptr->data<<endl;
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
        cout<< "Stack overflow"<<endl;
        return 0;

    } else {
        struct Node *n = (struct Node *) malloc(sizeof(struct Node));

        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top){
    if(isEmpty(*top)){
        cout<< "Stack Underflow"<<endl;
        return 0;

    } else {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);

        return x;
    }
}



int main()
{
    struct Node *top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);

    linkedlistTraversal(top);
    int ele = pop(&top);
    cout<< "popped element is "<<ele<<endl;
    linkedlistTraversal(top);

    return 0;
}