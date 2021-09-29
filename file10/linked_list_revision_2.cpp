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

struct Node *deleteFirst(struct Node *head){
    struct Node *ptr = head;

    head = head->next;
    free(ptr);

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

    head = deleteFirst(head);

    cout<< "After: "<<endl;
    traversal(head);
    return 0;
}