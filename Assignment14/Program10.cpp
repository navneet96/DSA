// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Element = ";
    cin>>n;
    int *arr = new int[n];
    int *arr1 = new int[n];
    cout<<"Enter "<<n<<" element = ";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    arr1[i]=arr[i];
    }
    cout<<"Another array element = ";
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    delete[] arr;
    delete[] arr1;

    return 0;

}