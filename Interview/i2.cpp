//how delete know how many object to delete

#include<bits/stdc++.h>
using namespace std;
int const n = 10;

class Base{
    public:
    int b_var;

};

int main(){
    Base *bp = new Base[n];

    delete[] bp;

    return 1;
    

}