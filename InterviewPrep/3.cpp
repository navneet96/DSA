//Inheritance
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:

    Base(){
        cout<<"Base Constructor"<<endl;
    }
    Base(int b){
        cout<<"Base Constructor parameter"<<endl;
    }
    ~Base(){
        cout<<"Base Destructor"<<endl;
    }
    void show(){
        cout<<"Hello"<<endl;
    }
};

class Dervied: public Base{

    public:

    Dervied(){
        cout<<"Derived counstructor"<<endl;
    }
    Dervied(int d){
        cout<<"Derived counstructor parameter"<<endl;
    }
    ~Dervied(){
        cout<<"Derevied Destructor"<<endl;
    }
    void show(){
        cout<<"hi"<<endl;
    }
};

int main(){
    Base b(10);
    Dervied d(10);
    d.show();
    d.show();
    return 0;

}