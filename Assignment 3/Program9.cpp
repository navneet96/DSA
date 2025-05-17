//Write a program to find the greatest among three given numbers. 
//Print number once if the greatest number appears two or three times.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int A, B, C;
 
    cout<<"Enter first Number = ";
    cin>>A;
    cout<<"Enter Second Number = ";
    cin>>B;
    cout<<"Enter Third Number = ";
    cin>>C;

 
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
 
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
 
    if (C >= A && C >= B)
        printf("%d is the largest number.", C);
 
    return 0;
}