//Write a program to find the position of first 1 in LSB.
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, R, count = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while (n != 0)
    {
        R = n & 1;
        count++;
        if (R == 1)
        {
            printf("Position of first 1 in LSB = %d", count);
            break;
        }
        n = n >> 1;
    }
    return 0;
}