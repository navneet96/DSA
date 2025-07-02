// Count Vowels and Consonants
#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter a string : ";
    cin>>str;

    int vowels = 0, consonants = 0;
    for(int i = 0; str[i] != '\0'; i++){

        char ch = str[i];

        //convert uppercase to lowercase 
        if(ch >= 'A' && ch <='Z')
            ch = ch + ('a' - 'A');

        if(ch >= 'a' && ch <= 'z'){
            if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else consonants++;
        }
    }
    cout << "Vowels = " << vowels << ", Consonants = " << consonants << endl;
    return 0;
}