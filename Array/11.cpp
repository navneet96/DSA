//Right rotate array by 1 position 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter n element: ";
    for(int i = 0 ; i< n ; i ++)
    cin>>arr[i];

    int last = arr[n-1];
    for(int i = n-1 ; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    cout<<"Array after right rotation: ";
        for(int i = 0; i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}