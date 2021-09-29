#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;    
}

struct Node *insertElementAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct Node *insertElementAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;    
}

struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;

    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;    
}

struct Node *insertAfterANode(struct Node *head, int data, struct Node *prev){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prev->next;
    prev->next = ptr;

    return head;
}

int main()
{
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));
    struct Node *second = (struct Node *) malloc(sizeof(struct Node));
    struct Node *third = (struct Node *) malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout<< "Before: "<<endl;
    traversal(head);

    // head = insertElementAtFirst(head, 5);
    // head = insertElementAtIndex(head, 60, 2);
    // head = insertAtEnd(head, 50);
    head = insertAfterANode(head, 100, third);

    cout<< "After: "<<endl;
    traversal(head);
    return 0;
}