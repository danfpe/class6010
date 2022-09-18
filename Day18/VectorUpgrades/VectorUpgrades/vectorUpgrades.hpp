//
//  vectorUpgrades.hpp
//  VectorUpgrades
//
//  Created by Peng, Danfa  on 2022/9/17.
//

#ifndef vectorUpgrades_hpp
#define vectorUpgrades_hpp

#include <stdio.h>
#include <iostream>

class MyVector
{
private:
    size_t * data;
    size_t _size, _capacity;

public:
    // constructor
    MyVector();
    MyVector(size_t capacity);
    MyVector(size_t d[], size_t size);
    MyVector(const MyVector& v0);
    
    // methods
    void setSize(size_t size);
    size_t getValue(size_t index);
    void setValue(size_t index, size_t newValue);
    void freeVector();
    void pushBack(size_t value);
    void popBack();
    void growVector();
    void setCapacity(size_t capacity);
    size_t getSize();
    size_t getCapacity();
    void printVector();
    
    // operator
    MyVector& operator=(const MyVector& v0); // assign operator
    size_t& operator[](size_t index);
    bool operator==(const MyVector& v);
    bool operator>(const MyVector& v);
    
    // destructor
    ~MyVector();
};


#endif 
