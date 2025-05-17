//Reverse a String
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Navneet";
    int len = str.length();
    cout<<"Original String: "<<str<<endl; 
    
   // reverse(str.begin(), str.end());
    
    for(int i = 0; i<len/2 ; i++)
    swap(str[i],str[len-i-1]);
    cout<<"Reverse String: "<<str<<endl;
    return 0;
}