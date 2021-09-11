#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traversal(struct Node* head){
    struct Node *ptr = head;

    while(ptr != NULL){
        cout<< "Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = third;

    traversal(head);

    return 0;
}