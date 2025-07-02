//deep copy
#include <iostream>
using namespace std;
class A{
    private:
        int a, b;
        int *p; 
    public:
        
        void set(int a , int b, int c){
            this-> a = a;
            this -> b = b;
            *p = c;
        }
        void get(){
            cout<<"a = "<<a<<" , "<<"b = "<<b<<" , "<<"p = "<<*p<<endl;
        }
        A(){
            a = 0;
            b=0;
            p = new int();
        }
        A(A &obj){
            this-> a = obj.a;
            this->b = obj.b;
             p = new int(*obj.p);
         // p = new int();

          //  *p = *(obj.p);
        }
        ~A(){
            delete p;
        }
};

int main() {
 A obj1;
 obj1.set(3,5,7);
 obj1.get();
 A obj2 = obj1;
 obj1.get();
 
 obj2.set(7,4,9);
 obj1.get();
 obj2.get();
 
    return 0;
}
