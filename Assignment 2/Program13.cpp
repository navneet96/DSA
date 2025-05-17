//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,d1,d2;
    printf("Enter any three digit number = ");
    cin>>num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    cout<<d1<<d2<<num;
    return 0;
}