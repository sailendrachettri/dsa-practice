#include <iostream>
using namespace std;

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int A[], int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++) // for number of passes
    {
        isSorted = 1;
        cout << "Working on pass number " << i + 1 << endl;
        for (int j = 0; j < size - 1 - i; j++) // for comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                // swap element here: write seperate swap() function of direct logic here
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    cout << "Bubble Sort" << endl;

    // int A[] = {12, 54, 65, 7, 23, 9}; // not sorted by default
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // sorted by default
    int size = sizeof(A) / sizeof(A[0]);

    printArray(A, size);
    bubbleSort(A, size);
    cout << "\nAfter bubble sort algorithm: " << endl;
    printArray(A, size);

    return 0;
}