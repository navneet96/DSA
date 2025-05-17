//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int doller;
    float rupe;
    printf("Enter the doller = ");
    scanf("%d",&doller);
    rupe = doller*76.23;
    cout<<"In Rupees = "<<rupe;
    return 0;
}