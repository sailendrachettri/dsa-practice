#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3], sum = 0;
    cout<< "Enter the elements of 3X3 matrix: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
        }        
    }

    cout<< "Printing the elements of 3X3 matrix: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
            sum += matrix[i][j];
        }
        cout<<" = "<<sum;
        cout<< ""<<endl;
        sum = 0;
    }    

    return 0;
}