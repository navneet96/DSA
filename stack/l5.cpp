//Reverse a string using stack

#include<iostream>
#include<stack>

using namespace std;

int main(){

    string str = "Navneet";
    cout<<"String: "<<str<<endl;
    stack<char> s;

    for(auto ch:str){
        s.push(ch);
    }
    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"Reverse string: "<<ans<<endl;
    return  0;

}