//
//  structPart.cpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#include "structPart.hpp"

MyVector0 makeVector(size_t initialCapacity) {
    MyVector0 myvector;
    myvector._capacity = initialCapacity;
    myvector._size = 0;
    myvector.data = new size_t[initialCapacity];
    return myvector;
}

void freeVector(MyVector0& vector0) {
    delete[] vector0.data;
    vector0._size = 0;
    vector0._capacity = 0;
}

void pushBack(MyVector0& myVector, size_t value){
    if (myVector._size < myVector._capacity) {
        myVector.data[myVector._size] = value;
        myVector._size++;
    }
    return;
}

void popBack(MyVector0& myVector){
    myVector._size--;
    return;
}

size_t get(MyVector0& myVector, size_t index) {
    return myVector.data[index];
}

void set(MyVector0& myVector, size_t index, size_t newValue) {
    myVector.data[index] = newValue;
}

void growVector(MyVector0& myVector) {
    myVector._capacity *=2;
    size_t* temp = new size_t (myVector._capacity);
    for (int i = 0; i < myVector._size; i++) {
        temp[i] = myVector.data[i];
    }
    delete [] myVector.data;
    myVector.data = temp;
    temp = nullptr;
}
