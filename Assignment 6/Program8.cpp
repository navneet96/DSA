//Write a program to check whether a given number is a Prime number or not
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter any number= ";
    cin>>n;
    int m = n - 1;
    int factm = 1;
   // find factorial of n-1
    for (int i = 1; i <= m; i++) {
        factm *= i;
    }
  
  // add 1 to (n-1)!
    int factn = factm + 1;
    if (factn % n == 0) {
        // if remainder is 0 
        printf(" %d  is prime number",n);
    }
    else {
        printf("%d  is not prime number",n);
    }

    return 0;
}