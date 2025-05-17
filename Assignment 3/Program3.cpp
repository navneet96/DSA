//Write a program to check whether a given number is an even number or an odd number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    printf("Enter any number = ");
    cin>>num;
    if(num%2==0)
        cout<<"Number is Even";
    else
        cout<<"Number is odd";

    return 0;
}