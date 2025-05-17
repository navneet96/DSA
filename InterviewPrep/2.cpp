//polymorphism : Compile time
#include<bits/stdc++.h>
using namespace std;
class A {
    public:
      void sum(int a, int b)
        {
      int sum = a+b;
      cout<<"sum = "<<sum;     
  }
    void sum(int a, int b, int c){
     int sum = a+b+c;
   }
  };
  int main(){
    A obj;
    obj.sum(10, 20);
     obj.sum(10, 20, 30);
  
  }
  
  
  