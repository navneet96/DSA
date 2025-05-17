//Write a program to check whether a given number is an Armstrong number or not

#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cout<<"Enter any number =";
     cin>>n;
        int temp = n;
        int p = 0;
 
        /*function to calculate
          the sum of individual digits
         */
        while (n > 0) {
 
            int rem = n % 10;
            p = (p) + (rem * rem * rem);
            n /= 10;
        }
 
        /* condition to check whether
           the value of P equals
           to user input or not. */
          if (temp == p) {
            cout<<("Yes. It is Armstrong No.");
        }
        else {
            cout<<("No. It is not an Armstrong No.");
        }
    return 0;
}