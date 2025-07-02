//smart pointer 
//2.shared pointer

#include<iostream>
#include<memory>
using namespace std;

class MyClass {
    public:
        MyClass(int val) : value(val) {
            std::cout << "MyClass(" << value << ") constructed\n";
        }
        ~MyClass() {
            std::cout << "MyClass(" << value << ") destroyed\n";
        }
        void show() {
            std::cout << "Value: " << value << "\n";
        }
    private:
        int value;
    };

int main(){

    shared_ptr<MyClass> p1 = make_shared<MyClass>(10);
    {
        shared_ptr<MyClass> p2 = p1;
        cout<<"Use count: " << p1.use_count()<<endl;
        p2->show();
    }

    cout<<"Use count after p2: "<<p1.use_count()<<endl;
    return 0;


}
