//
//  structPart.hpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#ifndef structPart_hpp
#define structPart_hpp

#include <stdio.h>

struct MyVector0 {
    size_t* data;
    size_t _capacity, _size;
};

MyVector0 makeVector(size_t initialCapacity);
void freeVector(MyVector0& vector0);
void pushBack(MyVector0& myVector, size_t value);
void popBack(MyVector0& myVector);
size_t get(MyVector0& myVector, size_t index);
void set(MyVector0& myVector, size_t index, size_t newValue);
void growVector(MyVector0& myVector);

#endif /* structPart_hpp */
