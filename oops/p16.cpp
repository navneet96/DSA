//operator overloading
#include<bits/stdc++.h>
using namespace std;

class point{
    int x,y;
public:
    point():x{0},y{0}{}
    point(int x, int y):x{x},y{y}{}

    point operator + (const point &p2){
        point p;
        p.x = x +p2.x;
        p.y = y+p2.y;
        return p;

    }
    void print(){
        cout<<"x = "<< x<<"Y = "<<y<<endl;
    }
};
int main(){
    point p1(2,3),p2(4,5);
    point p3=p1+p2;
    p3.print();
    return 0;
}