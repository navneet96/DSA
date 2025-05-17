//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<bits/stdc++.h>
using namespace std;

void greatestNumber(int arr[],int size){
    int greatestNum =0;
    for(int i=0;i<size;i++)
    if(arr[i]>greatestNum)
    greatestNum = arr[i];
    cout<<"Greatest Number =  "<<greatestNum<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of element = ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter "<<n<<" element = ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    greatestNumber(arr,n);
    }
