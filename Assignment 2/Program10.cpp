//Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem;
    printf("Enter any number = ");
    scanf("%d",&num);
    rem = num%10;
    num = num-rem;
    cout<<num;
    return 0;
}