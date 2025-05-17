//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    if((num&1)==0)
    cout<<"even number";
    else
    cout<<"odd number";
    return 0;
}