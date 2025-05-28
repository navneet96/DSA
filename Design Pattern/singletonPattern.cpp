#include<iostream>
using namespace std;

class Singalton{

    private:
        static Singalton *instance;
        Singalton(){
            cout<<"Singleton constructor called. New object created"<<endl;
        }

    public:
        static Singalton* getInstance(){
            if(instance == nullptr){
                instance = new Singalton();
            }
            return instance;
        }
};

Singalton* Singalton :: instance = nullptr;
int main()
{
    Singalton *s1 = Singalton::getInstance();
    Singalton *s2 = Singalton::getInstance();

    cout<<(s1 == s2) <<endl;

    return 0;
}