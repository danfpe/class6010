//
//  structPart.hpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#ifndef structPart_hpp
#define structPart_hpp

#include <stdio.h>

struct MyVector {
    size_t* data;
    size_t _capacity, _size;
    
    void setSize(size_t size) {
        _size = size;
    }
    
    void setCapacity(size_t capacity) {
            _capacity = capacity;
        }
    
    size_t size() {
        return _size;
    }
    
    size_t* makeVector(size_t initialCapacity);
    };


#endif /* structPart_hpp */
