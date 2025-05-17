//Write a program to find the Nth term of the Fibonnaci series.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,a=0,b=1,c=0;
    cout<<"Enter the value of N= ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<n<<"th term of the Fibonnaci series = "<<c;

    return 0;
}