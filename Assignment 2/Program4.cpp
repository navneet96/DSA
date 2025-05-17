//Write a program to swap values of two int variables without using a third variable.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first Number = ";
    cin>>num1;
    cout<<"Enter second Number = ";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After Swaping\nfirst Number = "<<num1<<endl;
    cout<<"second Number = "<<num2;
    return 0;
}