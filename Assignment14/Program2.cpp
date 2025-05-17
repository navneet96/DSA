// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[10],sum=0;
float avg=0.0;
cout<<"Enter 10 numbers = ";
for(int i =0; i<10;i++)
{
cin>>arr[i];
sum += arr[i];
}
avg = static_cast<float>(sum)/10;
cout<<"Average of 10 number = "<<fixed<<setprecision(2)<<avg<<endl;
    return 0;

}