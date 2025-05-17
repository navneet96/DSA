//Write a program to calculate sum of first N even natural numbers
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"Enter the value of N= ";
    cin>>n;
    for(i=1;i<=n;i++)
    sum=sum+2*i;
    cout<<"sum = "<<sum<<endl;

    return 0;
}