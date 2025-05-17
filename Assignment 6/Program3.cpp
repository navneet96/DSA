//Write a program to calculate sum of first N odd natural numbers
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"Enter the value of N= ";
    cin>>n;
    for(i=1;i<=n;i++)
    sum=sum+(2*i-1);
    cout<<"sum = "<<sum<<endl;
    return 0;
}