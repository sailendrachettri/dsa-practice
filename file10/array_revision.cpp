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

void deletion(int arr[], int index, int size){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    traversal(arr, size);

    // Insertion operation
    // int index = 5;
    // int element = 100;
    // insertion(arr, size, index, element);
    // size++;
    // cout<< "After insertion: "<<endl;
    // traversal(arr, size);

    // Deletion operation
    // int index = 3;
    // deletion(arr, index, size);
    // cout<< "After Deletion"<<endl;
    // size--;
    // traversal(arr, size);

    //Search operation
    int element = 40;
    int res = search(arr, size, element);
    if (res) cout<< "Element found"<<endl;
    else cout<< "Element NOT found"<<endl;
    

    return 0;
}