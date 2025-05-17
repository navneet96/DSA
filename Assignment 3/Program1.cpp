//Write a program to check whether a given number is positive or non-positive.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    printf("Enter any number = ");
    cin>>num;
    if(num>=0)
        cout<<"Positive";
    else
        cout<<"Non-Positive";

    return 0;
}