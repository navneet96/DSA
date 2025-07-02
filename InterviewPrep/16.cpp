//smart pointer
//3.week pointer
#include<iostream>
#include<memory>

using namespace std;

class MyClass{
    public: 
        MyClass(){
            cout<<"Constructor Called"<<endl;
        }
        ~MyClass(){
            cout<<"Destructor Called"<<endl;
        }
        void greet(){
            cout<<"Hello from Myclass"<<endl;
        }
};

int main(){

    shared_ptr<MyClass> sp = make_shared<MyClass>();
    weak_ptr<MyClass> wp = sp;

    cout<<"Use count(shared_ptr): "<<sp.use_count()<<endl;
    wp.lock()->greet();
    // if(auto temp = wp.lock()){
    //     temp->greet();
    // }else{
    //     cout<<"object has been destroyed"<<endl;
    // }
    sp.reset();
    return 0;
}