//
//  structPart.cpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#include "structPart.hpp"

size_t* MyVector::makeVector(size_t initialCapacity) {
    _capacity = initialCapacity;
    setSize(0);
    data = new size_t[initialCapacity];
    return data;
}

void freeVector(MyVector& vector0) {
    delete[] vector0.data;
    vector0._size = 0;
    vector0._capacity = 0;
}

void pushBack(MyVector& myVector, size_t value){
    if (myVector._size < myVector._capacity) {
        myVector.data[++myVector._size] = value;
    }
    return;
}

void popBack(MyVector& myVector){
    myVector._size--;
    return;
}

size_t get(MyVector& myVector, size_t index) {
    return myVector.data[index];
}

void set(MyVector& myVector, size_t index, size_t newValue) {
    myVector.data[index] = newValue;
}

void growVector(MyVector& myVector) {
    myVector._capacity *=2;
    
    
}
