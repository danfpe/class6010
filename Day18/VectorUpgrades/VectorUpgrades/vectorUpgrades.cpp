//
//  vectorUpgrades.cpp
//  VectorUpgrades
//
//  Created by Peng, Danfa  on 2022/9/17.
//

#include "vectorUpgrades.hpp"
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

MyVector::MyVector(size_t d[], size_t size)
{
    _capacity = 20;
    _size = size;
    data = new size_t[size];
    for(size_t i =0; i < size; i++) {
        data[i] = d[i];
    }
}

// copy constructor
MyVector::MyVector(const MyVector& v0)
{
    _capacity = v0._capacity;
    _size = v0._size;
    data = new size_t [_capacity];
    for(size_t i =0; i < _size; i++) {
        data[i] = v0.data[i];
    }
}

// operator overloading, assign operator
MyVector& MyVector::operator=(const MyVector& v0)
{
    if(this == &v0)
        return *this;
    
    _capacity = v0._capacity;
    _size = v0._size;
    for(size_t i =0; i< _size; i++) {
        data[i] = v0.data[i];
    }
    return *this;
}

// destructor
MyVector::~MyVector()
{
    delete[] data;
    data = nullptr;
    _size = 0;
    _capacity = 0;
}

// operator overloading []
size_t& MyVector::operator[](size_t index)
{
    return data[index];
}

// operator overloading ==
bool MyVector::operator==(const MyVector& v)
{
    if (_size == v._size) {
        for(int i = 0; i < _size; i++) {
            if (data[i] != v.data[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}

// operator overloading > e.g {9,9,4,15} { 9, 9, 10, 12 }
bool MyVector::operator>(const MyVector& v)
{
    if (_size == v._size) {
        for(int i = 0; i < _size; i++) {
            if (data[i] == v.data[i]){
                continue;
            }
            else if (data[i] > v.data[i]) {
                return true;
            }
            else
                return false;
        }
        return false;
    }
    return false;
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
    setCapacity(_capacity * 2);
    size_t* temp = new size_t (_capacity * 2);
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

