/*Virtual Function
A virtual function allows runtime polymorphism 
— the version of the function that gets called depends
on the type of the object being pointed to, 
not the type of the pointer.
*/

#include<iostream>
using namespace std;

class Base{

    public:
    virtual void show(){
        cout<<"Base Class show()"<<endl;
    }
};
class Derived : public Base{
    void show() override{
        cout<<"Derived class show()"<<endl;
    }
};

int main(){

    Base *bptr;
    Derived d;
    bptr = &d;

    bptr->show();

    return 0;
}