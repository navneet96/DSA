//Write a program to check whether a given number is a three-digit number or not.
#include<bits/stdc++.h>
using namespace std;
main(){
    
int num;
cout<<"Enter any number = ";
cin>>num;
	if(num>99 && num<1000)
	{
		printf("%d is a 3 digit number",num);
	}
	else
	{
		printf("%d is not a 3 digit number",num);
	}
	return 0;
}