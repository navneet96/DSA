//vecter

#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vec1;
    //vector<int> vec2(10,20);
    //vector<int> vec3 = {1,2,3,4,5};
    //vector<int> vec4 {1,2,3,4,5};
for (int i = 0; i<32;i++){
    vec1.push_back(i);
    cout<<"size = "<<vec1.size()<<" "<<"capacity = "<<vec1.capacity()<<endl;
}
    return 0;
}

