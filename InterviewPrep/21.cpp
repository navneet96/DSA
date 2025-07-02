//constructor
// destructror
#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};

class C{
    public :
    C(){
        cout<<"constructor of C"<<endl;
    }
    ~C(){
        cout<<"Destructor of C"<<endl;
    }
};
class B : public C,public A
{
    public :
    B(){
        cout<<"constructor of B"<<endl;
    }
    ~B(){
        cout<<"Destructor of B"<<endl;
    }
};

int main() {
   B objB;
   
    return 0;
}
