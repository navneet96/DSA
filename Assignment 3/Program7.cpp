//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;

    cout<<"Enter the cofficient of a = ";
    cin>>a;
    cout<<"Enter the cofficient of b = ";
    cin>>b;
    cout<<"Enter the cofficient of c = ";
    cin>>c;

    d = b*b-4*a*c;
    cout<<"value of d is "<<d<<endl;
    if(d==0)
    cout<<"Roots are real and equal";
    else if(d>0)
    cout<<"Roots are real & distinct";
    else
    cout<<"imaginary roots";

    return 0;

}