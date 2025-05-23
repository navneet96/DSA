#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
        int arr[100];
        int size = 0;

        heap (){

            arr[0] = -1;
            size = 0;
        }
        void insert( int val){

            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1){

                int parent = index / 2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return ;
                }

            }
        }
        void print(){
            for(int i = 1; i<=size;i++){
                cout<< arr[i]<<" ";
            }cout<<endl;
        }

        void deleteFromHeap(){
            if(size == 0){
                cout<<"Heap is empty "<<endl;
                return ; 
            }
            //last node move to first/root node
            arr[1]=arr[size];
           
            size--;  //remove last index
        

        //take root node to its correct position
        int i = 1;
        while(i < size){
           int leftIndex = 2*i;     
           int rightIndex = 2*i+1;
           if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
           }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
           }
           else{
             return ;
           }
        }
        }
};

void heapify(int arr[],int n, int i){
    //for 1 base indexing
    int largest = i;
    int left = 2*i;  //2*i +1 for 0 base indexing
    int right = 2*i + 1;  //2*i +2  for 0 base indexing
    // if(left < n && arr[largest] < arr[left] ) for 0 base indexing
    if(left <= n && arr[largest] < arr[left] ){
            largest = left;
    }   
     // if(right < n && arr[largest] < arr[right] ) for 0 base indexing
     if(right <= n && arr[largest] < arr[right] ){
            largest = right;
    }   
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);

    }

}

void heapSort(int arr[], int n){

    int size = n;
    while(size > 1){

        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}
int main(){
    heap h;
    h.insert(50);
    h.insert(53);
    h.insert(54);
    h.insert(65);
    cout<<"Heap value : "<<endl;
    h.print();
    cout<<endl;
    h.deleteFromHeap();
    cout<<"Heap value after Delete : "<<endl;
    h.print();

    int arr [6] = {-1,54,53,55,52,50};
    int n = 5;

    //heap creation
    for(int i = n/2; i>0; i-- ){
        heapify(arr, n, i);
    }
    cout<<"Printing the array now "<<endl;
        for(int i = 1; i<=n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    //heapsort
    heapSort(arr, n);

    cout<<"Printing sorted array now "<<endl;
        for(int i = 1; i<=n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;


    cout<<"Using Priority Queue"<<endl;
    //maxheap
    priority_queue<int> maxHeap;
    maxHeap.push(4);
    maxHeap.push(2);
    maxHeap.push(5);
    maxHeap.push(3);
   
    cout<<"Element on top = "<<maxHeap.top()<<endl;
    maxHeap.pop();
    cout<<"Element on top = "<<maxHeap.top()<<endl;
    cout<<"size of max heap = "<<maxHeap.size()<<endl;
    if(maxHeap.empty()){
        cout<<"maxHeap is empty"<<endl;
    }
    else{
        cout<<"maxHeap is not empty"<<endl; 
    }
    //minheap
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
   
    cout<<"Element on top = "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Element on top = "<<minHeap.top()<<endl;
    cout<<"size of max heap = "<<minHeap.size()<<endl;
    if(minHeap.empty()){
        cout<<"minHeap is empty"<<endl;
    }
    else{
        cout<<"minHeap is not empty"<<endl; 
    }
    return 0;
}