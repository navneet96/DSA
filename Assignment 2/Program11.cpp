//Write a program to input a number from the user and also input a digit.
// Append a digit in the number and print the resulting number. 
//(Example - number=234 and digit=9 then the resulting number is 2349)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,dig;
    printf("Enter any number = ");
    scanf("%d",&num);
    printf("Enter any digit = ");
    scanf("%d",&dig);
    num = num*10+dig;
    cout<<num;
    return 0;
}