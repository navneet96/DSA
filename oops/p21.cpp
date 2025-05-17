//deep copy
#include<bits/stdc++.h>
using namespace std;

class demo{
    public:
    int a;
    int b;
    int *p;

    demo(){
        p= new int;
    }

    demo(demo &d){
        a=d.a;
        b=d.b;
        p = new int;
        *p=*(d.p);
    }

    void setdata(int x,int y,int z){
        a=x;
        b=y;
        *p=z;
    }
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    } 

};
int main(){
    demo d1;
    d1.setdata(10,20,30);
    demo d2 = d1;
    d1.showdata();
    d2.showdata();
    d1.setdata(40,50,60);
    d1.showdata();
    d2.showdata();
    return 0;
}