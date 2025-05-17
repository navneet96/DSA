// Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],temp,n=10;
    cout<<"Enter ten Element = ";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
        }
    }
    }
    cout << "Sorted array: ";
    for(int i=0;i<10;i++)
     cout << arr[i] << " ";
     cout<<endl;
    return 0;
}