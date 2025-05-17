//Write a program to find next Prime number of a given number
#include<bits/stdc++.h>
using namespace std;

int main(){

     int num1;
   cout<<"Enter any number = ";
   cin>>num1; 
   int i=num1, j, p;
   while(i){
      p = 1;
      for(j = 2; j < i; j++){
         if(i % j == 0) {        
            p = 0;
         }     
      }
         if(p) {
        cout<<"Next Prime number of a given number = "<<i;
        break;
         }
    i++;
    
  }

    return 0;
}