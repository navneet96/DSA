/*Write a function to find the first occurrence of 
adjacent duplicate values in the array.
Function has to return the value of the element.*/

#include<bits/stdc++.h>
using namespace std;

int findFirstAdjacentDuplicate(int *arr, int size){

    for(int i =0 ; i < size; i++){
        if(arr[i] == arr[i+1])
            return arr[i];
    }
    return -1;
}
int main(){

    int size;
    cout<<"Enter the number of element: ";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter elements: ";
    for(int i = 0; i<size;i++)
        cin>>arr[i];

    int result = findFirstAdjacentDuplicate(arr,size);
    if(result != -1)
        cout<<"First adjacent duplicate: "<<result<<endl;
    else
        cout<<"No adjacent duplicates found."<<result<<endl;

    delete[] arr;
    

    return 0;
}