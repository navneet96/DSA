//Pure virtual function
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound() = 0;

    void sleeping(){
        cout<<"Sleeping"<<endl;
    }
};

class Dog:public Animal{
    public:

    void sound(){
        cout<<"woof"<<endl;
    }
};
int main(){

    Dog obj;
    obj.sound();
    obj.sleeping();
}