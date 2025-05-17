//Write a program to check whether a given number is positive, negative or zero.
#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
    cout<<"Enter any number = ";
    cin>>num;
    if(num==0)
    cout<<"Number is Zero";
    else if(num>0)
    cout<<"Number is Positive";
    else
    cout<<"Number is Negative";


    return 0;
    }