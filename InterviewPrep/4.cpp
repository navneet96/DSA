
// shallow copy
#include<bits/stdc++.h>
using namespace std;


class dummy{

    private:
    int a,b;
    public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    dummy(){
        
    }
    dummy(dummy &d){
        a = d.a;
        b = d.b;
    }

};

int main(){
    dummy d1;
    d1.setData(3,5);
    dummy d2 = d1; // shallow copy
    d2.getData();
    return 0;
}