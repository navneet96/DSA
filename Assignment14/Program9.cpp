// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element = ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter "<<n<<" element = ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Array in reverse order = ";
    for(int i = n-1;i>=0;i--)
    cout<<arr[i]<<" ";
    cout<<endl;
    delete[] arr;
    return 0;
}