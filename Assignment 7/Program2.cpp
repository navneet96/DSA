//Write a program to print first N terms of Fibonacci series
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,a=0,b=1,c=0;
    cout<<"Enter the value of N= ";
    cin>>n;
    cout<<"Fibonnaci series"<<endl;
    cout<<a<<","<<b;
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<","<<c;
        a=b;
        b=c;
    }
    

    return 0;
}