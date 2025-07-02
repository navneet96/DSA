//Count Even and Odd Numbers
//Input: [1, 2, 3, 4, 5] → Output: Even = 2, Odd = 3
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

    for(int i = 0 ; i< n ; i ++)
    if(arr[i]%2==0)
    countEven++;
    else
    countOdd++;
    cout<<"Count of Even number: "<<countEven<<endl;
    cout<<"Count of Odd number: "<<countOdd<<endl;

    return 0;
}
