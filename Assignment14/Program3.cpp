// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],evenSum=0,oddsum=0;
    cout<<"Enter ten number = ";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    for(int i=0;i<10;i++)
    if(arr[i]%2==0)
    evenSum +=arr[i];
    else
    oddsum +=arr[i];
    cout<<"Even sum = "<<evenSum<<endl;
    cout<<"Odd sum = "<<oddsum<<endl;
return 0;
}