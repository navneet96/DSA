//set
//usually implement using red black tree
#include<bits/stdc++.h>

using namespace std;

int main(){

    set<int> Set = {1,2,3,4,5,6,1,1,2,3,7};
    for(const auto & e :Set){
        cout<<e<<endl;
    }

return 0;
}