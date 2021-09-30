#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1) return 1;
    return 0;
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1) return 1;
    return 0;
}

// Push operation
void push(struct stack *ptr, int val){
    if(isFull(ptr)) cout<< "Stack OverFlow"<<endl;
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout<< val <<" is pushed."<<endl;
    }
}

int main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    cout<<isEmpty(s)<<endl;
    cout<<isFull(s)<<endl;

    push(s, 10);
    push(s, 20);
    push(s, 30);
    // push(s, 40); // can't push this element coz it causes stack over flow
    cout<<isEmpty(s)<<endl;
    cout<<isFull(s)<<endl;

    return 0;
}