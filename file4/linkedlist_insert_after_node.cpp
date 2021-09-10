#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void traverseElements(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *insertAfter(struct Node*head, struct Node * prevNode, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
    
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    traverseElements(head);
    head = insertAfter(head, fourth, 20);
    cout<< "After insertion: "<<endl;
    traverseElements(head);

    return 0;
}