#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void traverseLinkedListElements(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = NULL;

    traverseLinkedListElements(head);

    cout<< "After insertion: "<<endl;
    head = insertAtFirst(head, 10);

    traverseLinkedListElements(head);

    return 0;
}