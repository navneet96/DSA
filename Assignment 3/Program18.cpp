//Write a program which takes the month number as an input and display number of days in that month
#include<bits/stdc++.h>
using namespace std;
int main(){

    int month;
    cout<<"Enter the month = ";
    cin>>month;
    if(month==2)
    cout<<"Number of days in month 28 or 29";
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    cout<<"Number of days in month 31";
    else
    cout<<"Number of days in month 30";


    return 0;
}