//Reverse individual words in a string

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Navneet Kumar Srivastava";

    int l = 0;
    int r = s.length() - 1;

    while(l < r){

        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s;
    return 0;
}

// string reverseWords(string str){

//     string word;
//     stringstream iss(str);

//     string s1 = "";
//     while(iss >> word){
//         reverse(word.begin(),word.end());
//         s1 += word;
//         s1 += " ";
//     }
//     return s1;
// }
// int main(){

//     string s = "Navneet Kumar Srivastava";
//     string s1 = reverseWords(s);
//     cout<<s1;
//     return 0;
// }