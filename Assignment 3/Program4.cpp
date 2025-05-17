//Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    printf("Enter any number = ");
    cin>>num;
    if(num&1)
        cout<<"Number is odd";
    else
        cout<<"Number is Even";

    return 0;
}