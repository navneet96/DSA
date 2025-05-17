//1. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<bits/stdc++.h>
using namespace std;

void smallestNumber(int arr[],int size){
    int smallestNum;
    for(int i=0;i<size;i++)
    if(arr[i]<smallestNum)
    smallestNum = arr[i];
    cout<<"Smallest Number =  "<<smallestNum<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of element = ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    smallestNumber(arr,n);
    }