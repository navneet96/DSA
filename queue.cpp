#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue <int> q;
    q.push(12);
    cout<<"Front of queue = "<<q.front()<<endl;
    q.push(15);
    q.push(14);
    cout<<"size of queue is = "<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of queue is = "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empity "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }
    return 0;
}