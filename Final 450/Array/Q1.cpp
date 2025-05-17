//Reverse the array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){

    int n = arr.size();
    vector<int> temp(n);
    for(int i =0 ; i<n;i++)
        temp[i] = arr[n-i-1];

        for(int i =0 ; i<n;i++)
      arr[i] =   temp[i];
    
}
void reverseArrayTwoPointer(vector<int> &arr){
    int left = 0, right = arr.size() - 1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void reverseArraySwapElement(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n/2; i++ )
        swap(arr[i], arr[n-i-1]);
}
int main(){

    vector<int> arr = {1,2,3,4,5,6};
    cout<<"Original Array: ";
    for(int i=0; i<arr.size();i++)
        cout<<arr[i]<<" ";
    //reverseArray(arr);
   // reverseArrayTwoPointer(arr);
    reverseArraySwapElement(arr);
    cout<<"\nReverse Array: ";
    for(int i=0; i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}