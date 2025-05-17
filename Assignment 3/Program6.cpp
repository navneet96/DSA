//Write a program to print greater between two numbers. Print one number of both are the same.
#include<bits/stdc++.h>
using namespace std;
main(){
    
int num1,num2;
cout<<"Enter first number = ";
cin>>num1;
cout<<"Enter second number = ";
cin>>num2;
if(num1==num2)
cout<<num1;
else if(num1>num2)
cout<<num1<<" is the greater number";
else
cout<<num2<<" is the greater number";
	return 0;
}