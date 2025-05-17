#include<bits/stdc++.h>
using namespace std;
int main(){
    int month,day;
    cout<<"Enter the month = ";
    cin>>month;
    switch (month)
    {  
    case 1:
    cout<<"Month: January"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 2:
    cout<<"Month: Feburary"<<endl<<"Number of Day: 28 or 29"<<endl;
    break;
     case 3:
    cout<<"Month: March"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 4:
    cout<<"Month: April"<<endl<<"Number of Day: 30"<<endl;
    break;
     case 5:
    cout<<"Month: May"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 6:
    cout<<"Month: June"<<endl<<"Number of Day: 30"<<endl;
    break;
     case 7:
    cout<<"Month: July"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 8:
    cout<<"Month: August"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 9:
    cout<<"Month: September"<<endl<<"Number of Day: 30"<<endl;
    break;
     case 10:
    cout<<"Month: October"<<endl<<"Number of Day: 31"<<endl;
    break;
     case 11:
    cout<<"Month: November"<<endl<<"Number of Day: 30"<<endl;
    break;
     case 12:
    cout<<"Month: December"<<endl<<"Number of Day: 31"<<endl;
    break;
    default:
    cout<<"Invalid Month"<<endl;
    break;
    
    
    }
    
    return 0;

}