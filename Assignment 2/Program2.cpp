//Write a program to print a given number without its last digit.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ud,rm;
    cout<<"Enter any Number = ";
    cin>>num;
    ud = num%10;
    rm = (num-ud)/10;
    cout<<"Unit digit is "<<rm;
    return 0;
}