//Reverse the string
#include<iostream>
using namespace std;

int main(){

    string str;

    cout<<"Enter a string: ";
    cin>>str;

    int start = 0;
    int end = str.length()-1;
    while(start<end){
        swap(str[start++],str[end--]);
    }
    // int n = str.length();

    // for(int i = 0; i<n/2;i++){
    //     char temp = str[i];
    //     str[i] = str[n-i-1];
    //     str[n-i-1] = temp;

    // }
    cout<<"Reverse String: "<<str<<endl;
    return 0;
}