//
//  main.cpp
//  VectorUpgrades
//
//  Created by Peng, Danfa  on 2022/9/17.
//

#include <iostream>
#include "vectorUpgrades.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    size_t exampleArray[4] = {5, 5, 8, 9};
    MyVector v1(exampleArray, 4);
    MyVector v2(v1);
    MyVector v3 = v1;
    std::cout << v1[0] << " " << v2[0] <<" "<< v2[0] << "\n";
    
    size_t otherData[4] = {5, 5, 6, 11};
    MyVector v4(otherData, 4);
    std::cout << "compare two vectors: " << (v1 > v4) << "\n";
    std::cout << "compare two vectors: " << (v1 == v4) << "\n";
    return 0;
}
