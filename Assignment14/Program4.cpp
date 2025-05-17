// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],greatestNum=0;
    cout<<"Enter ten number = ";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    for(int i=0;i<10;i++)
    if(arr[i]>greatestNum)
    greatestNum = arr[i];
    cout<<"Greatest Number =  "<<greatestNum<<endl;
    return 0;
}