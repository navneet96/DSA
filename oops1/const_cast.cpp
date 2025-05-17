// const_cast in c++

//The expression const_cast<T>(v) can be used to change the const or valatile qualifiers of pointer or reference
//Where  T must be a pointer, reference or pointer to member type.

#include<iostream>
using namespace std;

int main(){

    const int a1 = 10;
    const int *b1 = &a1;
    int *d1 = const_cast<int*>(b1);
    *d1 = 15; // Invalid or Undefined Behavior

    cout<<a1 <<endl;
    cout<<*d1 <<endl;
    int a2 = 10;
    const int *b2 = &a2;
    int *d2 = const_cast<int*>(b2);
    *d2 = 15; // valid code



    return 0;
}