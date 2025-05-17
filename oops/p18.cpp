//method overloading
#include<bits/stdc++.h>
using namespace std;

class Base{

    public:

    void fun(){

        cout<<"I am fun with no parameter"<<endl;
    }

    void fun(int x){

        cout<<"I am fun with 1 parameter"<<endl;
    }
};
int main()
{
    Base b;
    b.fun();
    b.fun(10);

    return 0;

}