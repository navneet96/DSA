//Find the "Kth" max and min element of an array 
#include<bits/stdc++.h>
using namespace std;


int kMinElement(vector<int> &arr, int k){

    if(k < 1 || k > arr.size()) {
        cerr << "Invalid value of k\n";
        return -1; // or throw an exception
    }
    vector<int> temp = arr; // Copy to preserve original
    sort(temp.begin(), temp.end());
    return temp[k - 1];
}

int kMaxElement(const vector<int> &arr, int k) {
    if(k < 1 || k > arr.size()) {
        cerr << "Invalid value of k\n";
        return -1;
    }
    vector<int> temp = arr;
    sort(temp.begin(), temp.end(), greater<int>()); // Sort descending
    return temp[k - 1];
}
int main(){

    vector<int> arr ={7,10,4,3,20,15};
    int n = arr.size();
    int k = 3;
   
    cout<<"Kth Minimum element = "<<kMinElement(arr,k)<<endl;
    cout << "Kth Maximum element = " << kMaxElement(arr, k) << endl;

    return 0;

}