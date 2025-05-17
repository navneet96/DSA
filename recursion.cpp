#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
if(n==0)
return 1;
else
return n*factorial(n-1);
}
int power(int n){
    if(n==0)
        return 1;
    else
        return 2*power(n-1);
}
void reachHome(int src,int dest){
    if(src==dest){
    cout<<"Reach Home"<<endl;
    return ;
    }
    src++;
    reachHome(src,dest);
}
void sayDigit(int n,vector<string>arr){
    if(n==0)
    return ;
    int digit = n%10;
    n = n/10;
    

    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
bool isSorted(vector<int>arr,int size){
    if(size==0||size==1)
    return true;
    if(arr[size - 2] > arr[size - 1])
    return false;
    else
    return isSorted(arr,size-1);
}
int main(){
    // int n;
    // cout<<"Enter number = ";
    // cin>>n;
    // int fact=factorial(n);
    // cout<<"Factorial of "<<n<<" is "<<fact;
    // int num;
    // cin>>num;
    // int ans = power(num);
    // cout<<ans;
    // int dest = 10;
    // int src  = 1;
    // reachHome(src,dest);
    // int n;
    // cin>>n;
    // vector<string>arr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    // sayDigit(n,arr);
    vector<int>arr ={2,4,6,9,11,9,13};
    bool ans = isSorted(arr,arr.size());
    cout<<"Array Sorted = "<<ans<<endl;
    return 0;
}