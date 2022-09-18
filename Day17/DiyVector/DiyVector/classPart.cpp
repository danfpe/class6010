//
//  classPart.cpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#include "classPart.hpp"
#include <iostream>

// constructor
MyVector::MyVector()
{
    _capacity = 20;
    _size = 0;
    data = new size_t[_capacity];
}

MyVector::MyVector(size_t capacity)
{
    _capacity = capacity;
    _size = 0;
    data = new size_t[capacity];
}

// method implementation
size_t MyVector::getValue(size_t index)
{
    if (index < _size){
        return data[index];
    }
    std::cout << "index is out of range" << "\n";
    exit(0);
}

void MyVector::setValue(size_t index, size_t newValue)
{
    if (index < _capacity){
        data[index] = newValue;
    }
}

void MyVector::pushBack(size_t value)
{
    if (_size < _capacity) {
        data[_size] = value;
        _size++;
        return;
    }
    std::cout << "size reach the maximum number"<< "\n";
    return;
}

void MyVector::popBack()
{
    if (_size > 0) {
        _size--;
        return;
    }
    std::cout << "vector is already empty"<< "\n";
    return;
}

void MyVector::growVector()
{
    _capacity = _capacity * 2;
    size_t* temp = new size_t (_capacity);
    for (int i = 0; i < _size; i++) {
        temp[i] = data[i];
    }
    delete [] data;
    data = temp;
    temp = nullptr;
}

void MyVector::setSize(size_t size)
{
    _size = size;
}
    
void MyVector::setCapacity(size_t capacity)
{
    _capacity = capacity;
}

void MyVector::freeVector()
{
    delete[] data;
    _size = 0;
    _capacity = 0;
}

size_t MyVector::getSize()
{
    return _size;
}

size_t MyVector::getCapacity()
{
    return _capacity;
}
