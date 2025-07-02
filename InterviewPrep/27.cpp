//virtual destructor
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base{
    public:
    virtual void show() = 0;
    
    Base(){
        cout<<"Base class constructor"<<endl;
    }
    virtual ~Base(){
        cout<<"Base class destructor"<<endl;
    }
        
};
class Derived : public Base{
    
    public:
    Derived(){
        cout<<"Derived class constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived class destructor"<<endl;
    }
    void show() override{
        cout<<"Derived class show function"<<endl;
    }
    
    
};
int main() {
  Base *bptr = new Derived;
  bptr->show();
  delete bptr;

  

      
      
    return 0;
}