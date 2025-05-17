#include<iostream>
using namespace std;

class Hero {
    public:
    //constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    //Parameterised constructor
    Hero(int health){
        cout<<"this ->" <<this <<endl;
        this->health = health;

    }

     Hero(int health,char level){
      
        this->health = health;
        this->level = level;

    }
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
    void sethealth(int h){
        health = h;
    }
    void setlevel( char ch){
        level = ch;
    }

};

int main()
{
    Hero nick(10);
    Hero nick1(10,'A');
    cout<<"Address of Nick "<<&nick<<endl;
    nick.gethealth();
    Hero *h = new Hero();

    return 0;
}