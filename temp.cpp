#include <iostream>
using namespace std;

int main()
{
   int num1, num2;
   char optr;

   cout<<"Enter the value of num1: ";
   cin>>num1;

   cout<< "\nEnter the value of num2: ";
   cin>>num2;

   cout<< "\nEnter the operator: ";
   cin>>optr;

   if(optr == '+'){
       cout<< "The Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;

   } else if(optr == '-'){
       cout<< "The subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;

   } else if(optr == '/'){
       cout<< "The division of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;

   } else if(optr == '*'){
       cout<< "The multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
   }



    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int percentage, maths, programming;

//     cout<< "Enter the total marks of maths: ";
//     cin>>maths;
//     cout<< "Enter the total marks of programming: ";
//     cin>>programming;

//     percentage = (maths + programming) / 2;

//     if (percentage > 90)
//     {
//         if(maths > 80){
//             cout<< "Excellent"<<endl;
//         }
//     }
    

//     return 0;
// }