//Destructor

//shallow copy deep copy
#include<bits/stdc++.h>
using namespace std;

class Hero {

    private:
    //properties
    int health;
    public:
    char level;
    char *name;

    //constructor
    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
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
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health=temp.health;
        this->level = temp.level;

    }
    

    void print(){
        cout<<endl;
        cout<<"Name = "<<this->name<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero()
    {
        cout<<"Destructor called"<<endl ;
    }

};

int main()
{
    Hero a;  //static 

    //Dynamic

    Hero *b = new Hero() ;
    delete b; //manuaaly destructor 


    return 0;
}