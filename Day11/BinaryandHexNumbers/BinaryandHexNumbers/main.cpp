//
//  main.cpp
//  BinaryandHexNumbers
//
//  Created by Peng, Danfa  on 2022/9/7.
//

#include <iostream>
#include <vector>

void decimalToBinary(int decimalNum) {
    int i = 0;
    int binaryArray[32];
    while(decimalNum > 0) {
        binaryArray[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }
    for (int j = i - 1; j >=0; j--) {
        std::cout << binaryArray[j];
    }
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "please input your value: \n";
    
//    // converting decimal to binary
    int decimalNum;
    std::cin >> decimalNum;
//    decimalToBinary(decimalNum);
   
    return 0;
}
