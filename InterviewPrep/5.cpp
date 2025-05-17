// Deep copy

#include<bits/stdc++.h>
using namespace std;


class dummy{

    private:
    int a,b;
    int *p;
    public:
    
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void getData()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"p = "<<*p<<endl;
    }
    
    dummy(){
         p = new int();
    }

    dummy(dummy &d){
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }
    ~dummy(){
        delete p;
    }

};

int main(){
    dummy d1;
    d1.setData(3,5,7);
    dummy d2 = d1; 
    d2.setData(4,5,6);
    d1.getData();
    d2.getData();
    return 0;
}