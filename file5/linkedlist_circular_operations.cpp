#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head); // only while loop doesn't work becaues this condition become false at the beginning
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;

    while(p->next != head){
        p = p->next;
    }

    // At this point 'p' pointe to the last node of this circular linkedlist
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;


}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    linkedListTraversal(head);
    cout<< "After insertion: "<<endl;
    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 14);
    head = insertAtFirst(head, 90);
    linkedListTraversal(head);
    return 0;
}