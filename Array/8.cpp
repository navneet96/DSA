//Count Frequency of Each Element
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<int,int>freq;

    for(int i = 0; i<n;i++){
        freq[arr[i]]++;
    }
    cout<<"Element Frequency: "<<endl;
    for(auto it :freq){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}