//Q: What is one use of declttype in C++ ?
//A: It checks the type of expression.

#include<iostream>
using namespace std;

template<typename T1, typename T2>

// T2 add(T1 a, T2 b) {//-> decltype(a + b){
//     return a + b;

// }
auto add(T1 a, T2 b) -> decltype(a + b){
    return a + b;

}

int main()
{
    cout<<add(1,1.8)<<endl;
    cout<<add(1.8,1)<<endl;

    return 0;
}