//Write a program to calculate LCM of two numbers

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1,num2,i,gcd,lcm;
    cout<<"Enter two number =  ";
    cin>>num1>>num2;
    for(i=1;i<=num1&&i<=num2;++i){
         if(num1%i==0 && num2 %i==0)
            gcd=i;
            
    }
    cout<<"GCD = "<<gcd<<endl;
    lcm = (num1*num2)/gcd;

   
    cout<<"LCM = "<<lcm<<endl;

    return 0;
}