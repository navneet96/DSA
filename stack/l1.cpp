//Implementation of Stack using STL

#include<iostream>
#include<stack>

using namespace std;

void printStack(stack<int> s){
    cout<<"Stack element (top to bottom): ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){

    //creation of stack
    stack<int> s;

    //push opreration
    s.push(2);
    s.push(3);
    s.push(4);
    //pop
    s.pop();

    cout<<"Top element = "<<s.top()<<endl;
    cout<<"Size of stack = "<<s.size()<<endl;


    if(s.empty()){

        cout<<"Stack is empty "<<endl;
    }
    else
        cout<<"Stack is not empty "<<endl;
        
    printStack(s);


    return 0;
}