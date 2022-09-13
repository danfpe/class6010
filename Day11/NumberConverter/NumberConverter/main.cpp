//
//  main.cpp
//  NumberConverter
//
//  Created by Peng, Danfa  on 2022/9/7.
//

#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>
#include <fstream>

int stringToInt(std::string inputNum, int inputbase) {
    // initialization
    int decimal = 0;
    char flag = ' ';
    
    // is negative
    if (inputNum[0] == '-') {
        flag = '-';
        inputNum = inputNum.substr(1, inputNum.size() - 1);
    }
    
    // converting
    for(int i = int(inputNum.size()-1) ; i >= 0; i--) {
        if (inputNum[i] >= '0' && inputNum[i] <= '9') {
            decimal += (inputNum[i] - '0') * pow(inputbase, inputNum.size()- 1 - i);
        }
        else if (inputNum[i] >= 'A' && inputNum[i] <= 'F') {
            decimal += (int(inputNum[i]) - 55) * pow(inputbase, inputNum.size()- 1 - i);
        }
        else if (inputNum[i] >= 'a' && inputNum[i] <= 'f') {
            decimal += (int(inputNum[i]) - 87) * pow(inputbase, inputNum.size()- 1 - i);
        }
    }
    
    if (flag == '-') {
        return -decimal;
    }
    return decimal;
}


std::string intToDecimalString(int num) {
    return std::to_string(num);
}

std::string intToBinaryString(int decimalNum) {
    int i = 0;
    std::string stringBinary = "";
    while(decimalNum > 0) {
        stringBinary = std::to_string(decimalNum % 2) + stringBinary;
        decimalNum = decimalNum / 2;
        i++;
    }
    return stringBinary;
}

std::string intToHexString(int decimalNum) {
    // converting deciaml to hex
    std::string result = "";
    bool is_negative = false;
    if (decimalNum < 0) {
        is_negative = true;
        decimalNum = abs(decimalNum);
    }
    int remainder;
    while (decimalNum > 0) {
        remainder = decimalNum % 16;
        if (remainder > 9) {
            switch (remainder)
            {
                case 10: result = "A" + result; break;
                case 11: result = "B" + result; break;
                case 12: result = "C" + result; break;
                case 13: result = "D" + result; break;
                case 14: result = "E" + result; break;
                case 15: result = "F" + result; break;
            }
        }
        else {
            result = char(remainder + 48) + result; // int to char
        }
        decimalNum = decimalNum/16;
    }
    if (is_negative) {
        return '-' + result;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    assert(stringToInt("10", 10) == 10);
    assert(stringToInt("10", 2) == 2);
    assert(stringToInt("10", 16) == 16);
    
    assert(intToDecimalString(-10) == "-10");
    assert(intToBinaryString(12) == "1100");
    assert(intToHexString(-10) == "-A");
    assert(stringToInt( intToHexString( 10 ), 16 ) == 10);
    
    std::cout << "all test passed" << "\n";


}
