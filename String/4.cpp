// Change Case of Characters (without tolower(), toupper())
#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter a string: ";
    cin>>str;

    for(int i = 0; str[i] != '\0' ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    }

    cout<<"Changed case: "<<str<<endl;
    return 0;

}