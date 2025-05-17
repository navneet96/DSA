//Write a program to print all Prime numbers between two given numbers
#include<bits/stdc++.h>
using namespace std;

int main(){

   int num1,num2;
   cout<<"Enter two number = ";
   cin>>num1>>num2; 
   int i=num1, j, p;
   while(i <= num2){
      p = 1;
      for(j = 2; j < i; j++){
         if(i % j == 0) {        
            p = 0;
         }      
    }
    
    if(p) {
     cout<<i<<",";
    }
    
    i++; 
  }
    return 0;
}