//Check Anagram Strings
#include<iostream>
using namespace std;

int main(){

    string s1 , s2;
    cout<<"Enter two string: ";
    cin>>s1>>s2;

    if(s1.length() != s2.length())
    {
        cout<<"false"<<endl;
        return 0;
    }

    int freq1[256] = {0}, freq2[256] = {0};

    for(int i =0; s1[i] != '\0' ;i++ ){
        freq1[(int)s1[i]]++;
        freq2[(int)s2[i]]++;
    }

    for(int i =0; i<256;i++){
        if(freq1[i] != freq2[i] ){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}