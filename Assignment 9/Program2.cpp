// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<bits/stdc++.h>
using namespace std;
void addition(){
    int num1,num2,sum;
    cout<<"Enter first Number = ";
    cin>>num1;
    cout<<"Enter second Nmnber = ";
    cin>>num2;
    sum = num1 + num2;
    cout<<"Addition = "<<sum<<endl;
    }
void substraction()
{
    int num1,num2,sub;
    cout<<"Enter first Number = ";
    cin>>num1;
    cout<<"Enter second Nmnber = ";
    cin>>num2;
    sub = num1 - num2;
    cout<<"Substraction = "<<sub<<endl;
    }
    void multiplication()
{
    int num1,num2,mul;
    cout<<"Enter first Number = ";
    cin>>num1;
    cout<<"Enter second Nmnber = ";
    cin>>num2;
    mul = num1 * num2;
    cout<<"Multiplication = "<<mul<<endl;
    }
    void division()
{
    int num1,num2;
    double div;
    cout<<"Enter first Number = ";
    cin>>num1;
    cout<<"Enter second Nmnber = ";
    cin>>num2;
    div = static_cast<double>(num1) / static_cast<double>(num2);
    cout<<"Division = "<<div<<endl;
    }


//\nc. Multiplication\nd. Division\ne.
int main()
{
    char ch;
    
    cout<<"Select the operation you want to perform\na. Addittion\nb. Substraction\nc. Multiplication\nd. Division\ne. Exit\n";
    cout<<"Enter your choice = ";
    cin>>ch;
    
    switch(ch)
    {
        case 'a':
        addition();
       break;
        case 'b':
        substraction();
       break;
       case 'c':
        multiplication();
       break;
       case 'd':
        division();
       break;
        case 'e':
        break;
        default:
        cout<<"Invalid choice\n";
        main(); 
           }
    
    return 0;
}