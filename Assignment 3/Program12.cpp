//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character = ";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z')
      cout<<"Character is Upper Case Letters";
   else
      cout<<"Character is Lower case Letters";

      return 0;



}