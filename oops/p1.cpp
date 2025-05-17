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
    Hero nick;
    cout<<"Size of nick "<<sizeof(nick)<<endl;
    nick.sethealth(70,'A');
    nick.level='A';
    cout<<"Health is "<< nick.gethealth()<<endl;
    cout<<"level is "<<nick.level<<endl;

    return 0;
}