//Write a program to reverse a given number
#include<bits/stdc++.h>
using namespace std;

int main(){

    int num,i,rev_num=0,rem;
    cout<<"Enter any number= ";
    cin>>num;
    while(num){
        rem = num % 10;
        rev_num = rev_num*10 +rem;
        num/=10;
    }
    
    cout<<"Reverse Number = "<<rev_num<<endl;

    return 0;
}