//Write a program to print all Prime numbers under 100
#include<bits/stdc++.h>
using namespace std;

int main(){

   int i=2, j, p;
 
   while(i <= 100){
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