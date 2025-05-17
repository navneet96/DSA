//Write a program to count digits in a given number
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,count=0;
    cout<<"Enter any number= ";
    cin>>n;
    while (n != 0) {
        count++;
        n /= 10;
    }
    cout<<"Digits in number = "<<count;

    return 0;
}