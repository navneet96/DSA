//Check if Array is Palindrome
//Input: [1, 2, 3, 2, 1] → Output: true

#include<iostream>
using namespace std;

int main(){
    int countEven= 0,countOdd=0;
    int n;
    cout<<"Enter the number of Element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter n element: ";
    for(int i = 0 ; i< n ; i ++)
    cin>>arr[i];

    for(int i = 0, j = n-1 ; i<j ; i ++,j--)
    {
        if(arr[i] != arr[j]){
            cout<<"Array is not Palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Array is Palindrome"<<endl;

    return 0;
}

