//reference and pointer

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i;

    int &r = i;
    int *p = &i;

    cout<<&i<<'\t'<<&r<<'\t'<<&p<<endl;

    return 0;
}