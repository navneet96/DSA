//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,a=0,b=1,c=0;
    cout<<"Enter the number= ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if (c==n)
        {
        cout<<"Yes given number is there in the Fibbonacci series";
        break;
        }
        if(c>n)
        break;
    }
    if(c!=n)
    cout<<"NO given number is there in the Fibbonacci series";
    return 0;
}