// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var;
    cout<<"Enter the value of var(1/2/3) = ";
    cin>>var;
    switch (var)
    {
    case 1:
        cout<<"good";
        break;
    case 2:
        cout<<"better";
        break;
    case 3:
        cout<<"best";
        break;
    
    default:
        cout<<"invalid";
        break;
    }
}