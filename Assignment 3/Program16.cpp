//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    cout<<"Enter any character = ";
	cin>>ch;
	if(ch >= 65 && ch <= 90)
		cout<<"Chasacter is an alphabet (uppercase)";
	else if(ch >= 97 && ch <= 122)
		cout<<"Chasacter is an alphabet (lowercase)";
	else if(ch >= 48 && ch <= 57)
		cout<<"Chasacter is a Number";
	else
		cout<<"Chasacter is a Symbol";
return 0;
}