//copy constructor
#include<iostream>
using namespace std;

class Hero {
    public:
    //constructor
    Hero(){
        cout<<"Default Constructor called"<<endl;
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
    //copy constructor
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level = temp.level;

    }
    private:
    //properties
    int health;
    public:
    char level;

    void print(){
        cout<<"Health = "<<this->health<<endl;
        cout<<"level = "<<this->level<<endl;


        
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
    Hero nick(70,'C');
    nick.print();

    //copy constructor called default
    Hero pick=nick;
    pick.print();
   



    return 0;
}