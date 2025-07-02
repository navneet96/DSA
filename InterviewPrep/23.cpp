//Binary search
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    
    //set the pointer at starting and ending
    int low = 0;
    int high = n - 1;
    
    while(low <= high){
        
        int mid = (low + high)/2;
        
        if(arr[mid] == key)
            return mid;
            
        else if(arr[mid] < key)
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    
    return -1;
}



int main(){

    int arr[]  = {2,4,5,7,8,9,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int key = 8;
    
    int result = binarySearch(arr,size,key);
    
    if(result != -1)
        cout<<"Element found at index "<<result<<endl;
    else
        cout<<"Element not found"<<endl;
    
    return 0;
}