// Remove All White Spaces
#include<iostream>
using namespace std;

int main(){

    string str,result = "";

    cout<<"Enter a string: ";
    getline(cin>>ws,str);

    for(int i = 0; str[i] != '\0' ; i++){
        if(str[i] != ' ' )
        result += str[i];
    }

    cout<<"Without space: "<<result<<endl;

    

    return 0;
}