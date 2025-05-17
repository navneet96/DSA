#include<bits/stdc++.h>
using namespace std;

class Base{
    int x;
    public:
    Base(){}
    Base(int x):x{x}{}

    friend void fun(Base &);
};

void fun(Base &obj){

    cout<<obj.x<<endl;
    obj.x=20;
     cout<<obj.x<<endl;
}

int main(){
    Base b1(10);
    fun(b1);
    return 0;
}
