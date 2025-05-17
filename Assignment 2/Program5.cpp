//Write a program to input a three-digit number and display the sum of the digits.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,d1,d2,d3,sum;
    cout<<"Enter any three digit Number = ";
    cin>>num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    sum = d1 + d2 + d3;
    cout<<"Sum of the digit is "<<sum;
    return 0;
}