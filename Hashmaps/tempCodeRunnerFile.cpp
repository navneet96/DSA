//map

#include<iostream>
#include<map>

using namespace std;

int main(){

    //creation
    map<string,int> m;

    //Insertion
    //1
    pair<string,int> p = make_pair("Navneet",1);
    m.insert(p);

    //2
    pair<string,int> pair2("Srivastav",2);
    m.insert(pair2);

    //3

    m["Kumar"] = 3; //create a new entry

    m["Kumar"]  = 4; //update the entry

    cout<<m["Kumar"]<<endl;
    cout<<m.at("Kumar")<<endl;
    //cout<<m.at("Chuji")<<endl;
    cout<<m["Chuji"]<<endl;
    cout<<m["Puji"]<<endl;
    cout<<m.at("Chuji")<<endl;

    //size
    cout<<m.size()<<endl;
    //to check present of key
     cout<<m.count("Kumar1")<<endl;  //0
    cout<<m.count("Kumar")<<endl;  //1

    //erase

    m.erase("Kumar");
    cout<<m.size()<<endl;

    for(auto i:m)
        cout<<i.first<<"  "<<i.second<<endl;


    //iterator
    map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }


    return 0;
}