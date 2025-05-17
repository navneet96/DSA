//Write a program which takes the cost price and selling price of a product from the user. 
//Now calculate and print profit or loss percentage.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    float sp,cp,pl;
    cout<<"Enter the cost Price of the Product = ";
    cin>>cp;
    cout<<"Enter the selling Price of the Product = ";
    cin>>sp;
    pl = ((sp-cp)/cp )* 100;
    if(pl>0){
        cout<<"Profit Percentage "<<pl;
    }
    else{
        pl=pl*(-1);
        cout<<"Loss Percentage "<<pl;
    }
return 0;
}
