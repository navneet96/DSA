#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b==0)
    return 1;
    if(b==1)
    return a;
    //Recursive call
    int ans = power(a,b/2);

    //if b is even
    if(b%2 == 0){
        return ans * ans; 
    }
    else{
        //if b is odd
        return a * ans * ans;
    }
}
int main(){
    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;

    int ans = power(a,b);

    cout<<"a to power b is "<<ans<<endl;


    return 0;
}