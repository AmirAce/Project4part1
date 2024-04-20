#ifndef ARRAYHEAP_H
#define ARRAYHEAP_H

#include <iostream>
#include <string>

class ArrayHeap {
public:
    // Nested structure to represent priority data within the heap
    struct priorityData {
        int priorityValue;
    };

    ArrayHeap();  // Default constructor

    void addElement(priorityData elem);  // Method to add an element to the heap
    priorityData removeMin(int i);            // Method to remove and return the minimum element
    priorityData returnMin(int i);            // Method to return the minimum element without removing
    std::string toString();              // Method to return a string representation of the heap

private:
    priorityData heap[10];  // Static array to hold heap elements
    int capacity;           // Capacity of the heap
    int size;               // Current size of the heap
};

#endif // ARRAYHEAP_H