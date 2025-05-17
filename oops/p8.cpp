#include<bits/stdc++.h>
using namespace std;

class Box{
    public:
    double width;
    double height;
    double depth;

};
int main(){
    Box obj;
    obj.width=5;
    obj.height=6;
    obj.depth=7;

    double volume = obj.width*obj.height*obj.depth;

    cout<<"volume of the box = "<< volume;


    return 0;
}