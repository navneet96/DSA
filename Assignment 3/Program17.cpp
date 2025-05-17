//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
// 1.a + b > c 
// 2.a + c > b 
// 3.b + c > a  
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter side a =";
    cin>>a;
    cout<<"Enter side b =";
    cin>>b;
    cout<<"Enter side c =";
    cin>>c;
    if((a + b <= c || a + c <= b || b + c <= a))
    cout<<"Triangle is invalid";
    else
    cout<<"Triangle is valid";


    return 0;
}