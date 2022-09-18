//
//  main.cpp
//  TemplatizeVector
//
//  Created by Peng, Danfa  on 2022/9/18.
//

#include <iostream>
#include "templatizeVector.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    size_t exampleArray[4] = {5, 5, 8, 9};
    MyVector<size_t> v1(exampleArray, 4);
    MyVector<size_t> v2(v1);
    MyVector<size_t> v3 = v1;
    std::cout << v1[0] << " " << v2[0] <<" "<< v2[0] << "\n";
    
    char exampleArray0[4] = {'a', 'b', 'f', 'd'};
    MyVector<char> v4(exampleArray0, 4);
    MyVector<char> v5(v4);
    MyVector<char> v6 = v4;
    std::cout << v4[0] << " " << v5[0] <<" "<< v6[0] << "\n";

    char otherData[4] = {'a', 'b', 'd', 'e'};
    MyVector<char> v7(otherData, 4);
    std::cout << "compare two vectors: " << (v4 > v7) << "\n";
    std::cout << "compare two vectors: " << (v4 == v7) << "\n";
    return 0;
}
