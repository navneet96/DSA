//structure padding and packing
//It is a way to speed up the cpu optimization
#include<bits/stdc++.h>
using namespace std;

#pragma pack(1)  //disable padding
struct Base 
{
    char a;
    char b;
    int i;
    char c;
    
    
};

int main(){

    cout<<"Size of Base is "<<sizeof(Base)<<endl;

    return 0;
}