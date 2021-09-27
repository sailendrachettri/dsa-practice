#include <iostream>
using namespace std;

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element: " << arr[i] << endl;
    }
}

void insertion(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    traversal(arr, size);

    int index = 3;
    int element = 100;
    insertion(arr, size, index, element);
    size++;

    cout<< "After insertion: "<<endl;
    traversal(arr, size);
    return 0;
}