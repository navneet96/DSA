//method overloading
#include<bits/stdc++.h>
using namespace std;

class Base{

    public:

    void fun(){

        cout<<"I am Base fun"<<endl;
    }

};
class Derived:public Base{
    public:
    void fun(){

        cout<<"I am Derived fun"<<endl;
    }
};
int main()
{
    Base *b = new Derived();
    Derived d;
    d.fun();
    b->fun();

    return 0;

}