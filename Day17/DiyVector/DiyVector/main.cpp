//
//  main.cpp
//  DiyVector
//
//  Created by Peng, Danfa  on 2022/9/14.
//

#include <iostream>
#include "classPart.hpp"
#include "assert.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    MyVector myvector;
    myvector.pushBack(23);
    myvector.pushBack(100);
    myvector.pushBack(200);
    assert(myvector.getValue(0) == 23);
    assert(myvector.getValue(1) == 100);
    assert(myvector.getValue(2) == 200);
    myvector.setValue(0, 123);
    assert(myvector.getValue(0) == 123);
    std::cout <<"size "<< myvector.getSize() << "\n";
    std::cout <<"capacity: " <<myvector.getCapacity() << "\n";
    myvector.growVector();
    std::cout <<"size after grow: "<< myvector.getSize() << "\n";
    std::cout <<"capacity after grow: " <<myvector.getCapacity() << "\n";
    assert(myvector.getValue(0) == 123);
    assert(myvector.getValue(1) == 100);
    assert(myvector.getValue(2) == 200);
    return 0;
}
