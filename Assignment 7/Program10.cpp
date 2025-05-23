//Write a program to print all Armstrong numbers under 1000
#include<bits/stdc++.h>
using namespace std;

int main(){

   int i, sum, num, count = 0;
    printf(
        "All Armstrong number between 1 and 1000 are:\n");
  
    // This loop will run for 1 to 1000
    for (i = 1; i <= 1000; i++) {
        num = i;
        // Count number of digits.
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 1000 - num % 100) / 100, count);
        // Check for Armstrong Number
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }

    return 0;
}