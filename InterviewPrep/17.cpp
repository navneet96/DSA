//friend function 
/*A friend function is a function that is not a member of a class but has access to the class's private and protected members.
 This allows external functions to operate on a class's internal data without being part of the class itself
 */
//Overuse can weaken encapsulation and increase coupling.
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
