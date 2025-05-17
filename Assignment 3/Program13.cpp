//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cout<<"Enter any number = ";
    cin>>num;
    if(num%3==0 && num%2==0)
    cout<<"Number is divisble by 3 and 2";
    else
    cout<<"Number is not divisble by 3 and 2";




    return 0;
}