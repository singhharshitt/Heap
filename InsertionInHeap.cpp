#include <iostream>
using namespace std;
///This Heap code is following max heap preperty

class heap{
    public:
    //initealizing the array the arry as we know we implement heap in the form of arry;
    int arr[100];
    //creating a constructor
    heap(){
        arr[0]=-1;
        size=0;
    }
    //insert function to insert the elements in the heap;
    void insert(int value){
        size = size + 1;
        int index = size;
        //puthing the new value at the very end of the array
        arr[index]= value;
        //now shifting the elements of the array at correct position
        
    }
}
