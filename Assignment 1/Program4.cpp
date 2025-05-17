//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float r,pi=3.14,a;
    cout<<"Enter the radius of circle = ";
    cin>>r;
    a=pi*r*r;
    cout<<"Area of circle is "<<a<<" having the radius "<<r;
    return 0;
}