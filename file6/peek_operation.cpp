#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

// function to check a stack is full or empty
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        // cout << "Stack is full" << endl;
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        // cout << "Stak is empty" << endl;
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stack OverFlow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout<< val<< " is pushed."<<endl;
    }
}

int peek(struct stack *ptr, int i){
    int arrayInd = ptr->top - i + 1;

    if(arrayInd < 0){
        cout<< "Not a valid position for the stack"<<endl;
        return -1;

    } else {
        return ptr->arr[arrayInd];
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    cout << "Stack has been created successfully!" << endl;
    cout<< "Initially stack is empty and not full"<<endl;
    cout<< isFull(s)<<endl;
    cout<< isEmpty(s)<<endl;
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);

    cout<< "Peek operation"<<endl;
    for (int j = 1; j <= s->top + 1; j++)
    {
        cout<< "The value at position "<< j << " is "<< peek(s, j)<<endl;
    }
    
    return 0;
}