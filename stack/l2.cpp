//Implementation of Stack using Array

#include<iostream>

using namespace std;

class Stack{
    //properties
    public:
     int *arr;
     int top;
     int size;

    //behaviour
    Stack(int size){

        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Under flow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top <size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top == -1 ){
            return true;

        }
        else{
            return false;
        }

    }


};
int main(){
    Stack s(5);
    s.push(22);
    s.push(34);
    s.push(21);
    cout<<"Top element of Stack: "<<s.peek()<<endl;

    s.pop();
    s.pop();
    s.pop();
    cout<<"Top element of Stack: "<<s.peek()<<endl;
    s.push(21);

    if(s.isEmpty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;

    }


    return 0;
}