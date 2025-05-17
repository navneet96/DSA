//Write a program to calculate HCF of two numbers
#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1,num2,i,hcf=0;
    cout<<"Enter two number = ";
    cin>>num1>>num2;
    
    for(i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    cout<<"HCF of two number = "<<hcf;

    return 0;
}