/*
Pure Virtual Function
A pure virtual function is a virtual function
that must be overridden in a derived class. 
It makes the class abstract,
meaning you can't instantiate it.
*/

#include<iostream>
using namespace std;

class Base{

    public:
    virtual void show() = 0;
    Base(){
        cout<<"Base Class Constructor"<<endl;
    }

};

class Derived : public Base{

    public:

    Derived(){
        cout<<"Derived class constructor"<<endl;
    }

    void show() override{

        cout<<"Derived class show function"<<endl;
    }
};

int main(){

    // Base b; // ❌ Error: Can't instantiate abstract class
    Derived d;
    //d.show();
    Base *bptr ;
    bptr= &d;
    bptr->show();

    return 0;
}