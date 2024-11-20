#include <iostream>
using namespace std;
void heapify(int arr[], int size, int i){
    int largest= i;
    int left= 2 * i + 1;
    int right= 2 * i + 2;
    //CHECKING if left child is greater than the root
    if(left < size && arr[largest]<arr[left] ){
        largest = left;
    }
    
    //checking if the right child is greater than root
    
    if(right < size && arr[right]> arr[largest]){
        largest= right;
    }
    
    //making sure if root is greatest
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr,size, largest);
    }
}

// building a heap
void buildheap(int arr[], int size){
    //starting from last non-leaf element
    for(int i= size/2 -1; i>=0; i--){
        heapify(arr, size, i);
    }
}

void print(int arr[], int n){
    cout<<"Maxheap: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size; 
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    buildheap(arr, size);
    print(arr, size);
    return 0;
    
}
