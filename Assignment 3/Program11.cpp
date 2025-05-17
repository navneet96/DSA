//Write a program to take marks of 5 subjects from the user.
// Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    float s1,s2,s3,s4,s5,per;
    cout<<"Enter the marks of 5 subject = ";
    cin>>s1>>s2>>s3>>s4>>s5;
    per = (s1+s2+s3+s4+s5)/5;
    if(per>33){
        cout<<"Student is Pass and got "<<per<<" Percentage";
    }
    else{
        cout<<"Student is Fail and got "<<per<<" Percentage";
    }
return 0;
}
