//WAP to calculate the length of String using printf function.

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int length;
    cout<<"Enter any string = ";
    gets(str);
    length = strlen(str);
    cout<<"Length of String is "<<length;
    return 0;
}