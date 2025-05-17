//operator overloading

#include<iostream>
using namespace std;

class complex{
    private:
    int r,i;
    public:
    
    complex():r(0),i(0){}
    complex(int re, int ie): r(re), i(ie){}
    
    complex operator+(complex &obj){

        complex res;
        res.r += obj.r;
        res.i += obj.i;
        return res;
    }
    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }
};

int main(){

    complex obj1(2,3); 
    complex obj2(4,6);
    complex obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}