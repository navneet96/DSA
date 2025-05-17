//Write a program to print unit digit of a given number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ud;
    cout<<"Enter any Number = ";
    cin>>num;
    ud = num%10;
    cout<<"Unit digit is "<<ud;
    return 0;
}