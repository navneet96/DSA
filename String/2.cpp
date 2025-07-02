//Check Palindrome 
#include<iostream>
using namespace std;

int main(){

    string str;

    cout<<"Enter a string: ";
    cin>>str;

    bool isPalin = true;
    int n = str.length();

    for(int i = 0; i< n/2; i++){
        if(str[i] != str[n-i-1]){
            isPalin = false;
            break;
        }
    }
    cout<<(isPalin ? "True" : "False")<<endl;
    return 0;
}