// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[10],sum=0;
cout<<"Enter 10 numbers = ";
for(int i =0; i<10;i++)
{
cin>>arr[i];
sum += arr[i];
}
cout<<"Sum of 10 number = "<<sum<<endl;
    return 0;

}