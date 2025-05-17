//multiple inheritance

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

class Dog{
    public :
    void bark(){
        cout<<"Barking"<<endl;

    }

};
class babydog:public Animal,public Dog{
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