#include <iostream>
using namespace std;

/// This Heap code is following max-heap property
class heap {
public:
    // Initializing the array for heap implementation
    int arr[100];
    int size;

    // Constructor
    heap() {
        arr[0] = -1; // Placeholder for easier 1-based indexing
        size = 0;
    }

    // Function to insert elements into the heap
    void insert(int value) {
        size = size + 1;
        int index = size;
        // Place the new value at the end of the array
        arr[index] = value;

        // Shift the elements to maintain the max-heap property
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                // Swap parent and child if parent is smaller
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                // If parent is already greater, stop shifting
                break;
            }
        }
    }

    // Function to print the heap elements
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(60);

    h.print(); // This will print the max-heap representation of the array
    return 0;
}
