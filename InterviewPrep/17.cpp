//friend function 

#include<iostream>
using namespace std;

class Box{

    int height;
    int width;
    public:
    Box(int h, int w):height(h),width(w){}

    friend void displayArea(const Box& obj);
};

void displayArea(const Box& obj){
 int area = obj.height * obj.width;
 cout<<"Area of Box = "<<area<<endl;
}
int main(){

    Box b(4,5);
    displayArea(b);
    return 0;
}
