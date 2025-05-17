//Write a program to check whether a given number is divisible by 5 or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    printf("Enter any number = ");
    cin>>num;
    if(num%5==0)
        cout<<"Number is divisible by 5";
    else
        cout<<"Number is not divisible by 5";

    return 0;
}