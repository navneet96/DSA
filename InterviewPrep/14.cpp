//smart pointer
//1.unique pointer
#include<iostream>
#include<memory>
using namespace std;

class MyClass{
int value;
    public: 
    MyClass(int val) : value(val){
        cout<<"MyClass constructor"<<endl;
    }
    ~MyClass(){
        cout<<"MyClass Destructor"<<endl;
    }
    
    void display(){

    cout<<"Value: "<<value<<endl;
    }
};
int main(){

    // MyClass *ptr1 = new MyClass(42);
    // ptr1->display();
    // delete ptr1;

    unique_ptr<MyClass> ptr = make_unique<MyClass>(42);
    ptr->display();

    cout << "Exiting main\n";
}