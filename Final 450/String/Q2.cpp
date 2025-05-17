//Check whether a String is Palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){
    int left = 0, right = str.length()-1;
    while(left < right){

        if(str[left] != str[right])
            return false;
        ++left;
        --right;
    }
    return true;
}
 
int main()
{

    string str = "nitin";
    if(isPalindrome(str))
        cout<<"String is Palindrome"<<endl;
    else
        cout<<"String is not Palindrome"<<endl;

    return 0;
    
}

//     string str = s;
    //      int len = str.length();
    // for(int i = 0; i<len/2 ; i++)
    // swap(str[i],str[len-i-1]);
    // return s==str;