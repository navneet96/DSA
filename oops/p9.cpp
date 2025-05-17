
#include<bits/stdc++.h>
using namespace std;

class box{

    int length;
    int *breath;
    int height;

    public:

    box(){

        breath = new int;
    }
    void setValue(int a, int b, int c){

        length =a;
        *breath =b;
        height = c;
    }
   
   void show_data(){
    cout<<"Length = "<<length<<", breath = "<<*breath<<", height = "<<height<<endl;
   }

   box(box & temp){
    length = temp.length;
    breath = new int;
    * breath = *(temp.breath);
    height = temp.height;
   }
   ~box(){
    delete breath;
   }
};


int main(){
   box b1;
   b1.setValue(5,10,15);

   box b2= b1;
   b1.show_data();
   b2.show_data();

   b1.setValue(6,15,16);
   b1.show_data();
   b2.show_data();
    return 0;
}

