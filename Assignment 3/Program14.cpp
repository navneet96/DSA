//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cout<<"Enter any number = ";
    cin>>num;
    if(num%7==0 || num%3==0)
    cout<<"Number is divisble by 7 and 3";
    else
    cout<<"Number is not divisble by 3 and 2";




    return 0;
}