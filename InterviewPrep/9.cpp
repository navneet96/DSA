//Move constructor 

#include<iostream>
using namespace std;

class simple{
    private:
        int * data;
    public:
        simple(int value) : data(new int(value)){

            cout<<"Constructor called, data = "<<*data<<endl;
        }

        ~simple(){
            if(data) delete data;
            cout<<"Destructor Called"<<endl;
        }
      
        simple(const simple& other){
            data = other.data;
            cout<<"Copy constructor called"<<endl;

        }

        simple(simple && other){
            data  = other.data;
            other.data = nullptr;
            cout<<"Move constructor called"<<endl;
        }
        


};
int main(){

    simple obj1(42);
    simple obj2 = std::move(obj1);
    simple obj3 (simple(50));
    return 0;
}