//Diamond Problem 
/*It is a classic issue in multiple inheritance in C++.
It occurs when a class inherits from two classes that both
inherit from a common base class. This leads to ambiguity
about which version of the base class to use.
   A
  / \
  B  C
  \ /
   D
Class B and class C both inherit from A.
Class D inherits from both B and C.
Now D has two copies of A -- one via B, one via C. 
*/ 

#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"Hello from A"<<endl;
    }
};

// class B: public A{};
// class C: public A{};
// class D:public B,public C{};

class B: virtual public A{};
class C: virtual public A{};
class D:public B,public C{};
int main(){

    D obj;
   // obj.print();   // Error print is ambiguous
   //obj.B::print();
   //obj.C::print();

    obj.print(); // No Ambiguity 
    return 0;
}


