//single/multilevel inheritance

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

class Dog: public Animal{
    public :
    void bark(){
        cout<<"Barking"<<endl;

    }

};
class babydog:public Dog{
    public :
    void weep(){
        cout<<"weeping";

    }

};

int main(){

    babydog obj;
    obj.eat();
    obj.bark();
    obj.weep();
    return 0;
}