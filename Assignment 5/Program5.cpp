//Write a program to print the first N odd natural numbers in reverse order
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i;
    cout<<"Enter the value of N= ";
    cin>>n;
    for(i=n;i>=1;i--)
    cout<<2*i-1<<endl;

    return 0;
}