//
//  classPart.hpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#ifndef classPart_hpp
#define classPart_hpp

#include <stdio.h>

class MyVector
{
private:
    size_t * data;
    size_t _size, _capacity;

public:
    MyVector();
    MyVector(size_t capacity);
    
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
};

#endif /* classPart_hpp */

