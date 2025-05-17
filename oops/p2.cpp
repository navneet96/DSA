#include<iostream>
using namespace std;

class Hero {
    private:
    //properties
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }
    void sethealth(int h, char name){
        if(name=='A')
        {
            health = h;
        }
    }
    void setlevel( char ch){
        level = ch;
    }

};

int main()
{
    Hero a;  //static allocation
    a.sethealth(80,'A');
    a.setlevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.gethealth()<<endl;
    
    Hero *b = new Hero; //dynamic allocation
    b->sethealth(70,'A');
    b->setlevel('A');
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).gethealth()<<endl;

    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->gethealth()<<endl;
    return 0;
}