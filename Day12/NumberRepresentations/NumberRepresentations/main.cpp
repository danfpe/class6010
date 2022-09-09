//
//  main.cpp
//  NumberRepresentations
//
//  Created by Peng, Danfa  on 2022/9/9.
//

#include <iostream>
#include <assert.h>
#include <cmath>
#include <iomanip>
#include <fstream>

bool approxEquals( double a, double b, double tolerance ) {
    return std::abs(a - b) < tolerance;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << sizeof(char)<< "\n";
    std::cout << sizeof(int8_t)<< "\n";
    std::cout << sizeof(int16_t)<< "\n";
    std::cout << sizeof(uint8_t)<< "\n";
    std::cout << sizeof(uint16_t)<< "\n";
    
    uint8_t max_uint8 = 0xFF;
    uint8_t min_uint8 = 0x00;
    uint16_t max_uint16 = 0xFFFF;
    uint16_t min_uint16 = 0x0000;
    uint64_t max_uint64 = 0xFFFFFFFFFFFFFFFF;
    uint64_t min_uint64 = 0x0000000000000000;
    
    std::cout << "uint8_t max: " << +max_uint8 << "\n";
    std::cout << "uint8_t min: " << +min_uint8 << "\n";
    std::cout << "uint16_t max: " << +max_uint16 << "\n";
    std::cout << "uint16_t min: " << +min_uint16 << "\n";
    std::cout << "uint64_t max: " << +max_uint64 << "\n";
    std::cout << "uint64_t min: " << +min_uint64 << "\n";
    
    int8_t max_int8 = 0x7F;
    int8_t min_int8 = 0x80;
    int16_t max_int16 = 0x7FFF;
    int16_t min_int16 = 0x8000;
    int64_t max_int64 = 0x7FFFFFFFFFFFFFFF;
    int64_t min_int64 = 0x8000000000000000;
    std::cout << sizeof(int64_t);
    std::cout << "int8_t max: " << +max_int8<< "\n";
    std::cout << "int8_t min: " << +min_int8 << "\n";
    std::cout << "int16_t max: " << +max_int16 << "\n";
    std::cout << "int16_t min: " << +min_int16 << "\n";
    std::cout << "int64_t max: " << +max_int64 << "\n";
    std::cout << "int64_t min: " << +min_int64 << "\n";
    
    //edge case
    max_int8 = max_int8 + 1;
    min_int8 = min_int8 - 1;
    std::cout << "max out of range " << +max_int8<< "\n";
    std::cout << "min out of range " << +min_int8 << "\n";
    
    // part 2, floating point
    std::cout << std::setprecision(18) << "\n";
    std::cout << 0.1 << "\n";
    std::cout << 0.2 << "\n";
    std::cout << 0.3 << "\n";
    std::cout << ((0.1 + 0.2) == 0.3) << "\n";
    std::cout << approxEquals(0.1+0.2, 0.3, 1e-10);
    
    
    //part 3, utf-8
    std::ifstream myinput;
    myinput.open("UTF-8-demo.txt");
    char c;
    std::string line;
    if (myinput.is_open())
      {
        while (myinput.get(c))
        {
          std::cout << c << '\n';
        }
          myinput.close();
      }
    
    
    return 0;
}
