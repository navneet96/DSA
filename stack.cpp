#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

};
int main(){

    stack<int> s;
    s.push(10);
    s.push(15);
    s.push(16);
    cout<<"Element on stack ="<<s.size();

    return 0;
}