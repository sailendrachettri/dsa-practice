#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void traversalCircularLinkedList(struct Node *head){
    struct Node *ptr = head;

    do
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while (ptr != head);

    cout<<endl;
    
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
    fourth->next = head;

    traversalCircularLinkedList(head);
    return 0;
}