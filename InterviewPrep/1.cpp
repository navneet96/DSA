//Encapsulation
#include<bits/stdc++.h>
using namespace std;

class A{
    private:
      int a, b;
    public:
        void set(int x, int y){
          a = x;
          b = y;
        }
        void get(){
        cout<<"a = "<<a<<endl;
        cout<<"b = " <<b<<endl;
    
      }
    };
    int main()
    {
      A obj;
      obj.set(10, 20);
      obj.get();
    
    };
    