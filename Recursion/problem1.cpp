// Find the Factorial

#include<iostream>
using namespace std;

int factorial(int num){

    //base case
    if(num == 0)
        return 1;
    
    int fact = num * factorial(num -1);
    return fact;

}

int main(){
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int fact = factorial(num);
    cout<<"Factorial = "<<fact<<endl;
}