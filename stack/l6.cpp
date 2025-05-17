//Delete middle element of the stack

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack, int count,int size){

    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack,count+1,size);
    inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){

    int count = 0;
    solve(inputStack,count,N);
}
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main(){

    stack<int> s;
    s.push(4);
    s.push(8);
    s.push(12);
    s.push(9);
    s.push(5);
    deleteMiddle(s,s.size()-1);
    printStack(s);
    return 0;
}