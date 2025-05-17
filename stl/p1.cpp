//It consist of three component
//container -store the data
//iterator - traverse the data
//Algorithm - 

//std: array

#include<bits/stdc++.h>
using namespace std;

int main(){

   // array<int, 5> myarray;

    array<int ,5 > myarray = {1,2,3,4,5};
    array<int ,5 > myarray2 = {1,2,3,4,5};

    cout<<myarray.back()<<endl;
    cout<<myarray.at(2)<<endl;
    cout<<myarray.front()<<endl;
    cout<<myarray.data()<<endl;


}