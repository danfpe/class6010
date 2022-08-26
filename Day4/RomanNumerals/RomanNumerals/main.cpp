//
//  main.cpp
//  RomanNumerals
//
//  Created by Peng, Danfa  on 2022/8/27.
//  Convert a decimal number to a Roman Numeral

#include <iostream>
using namespace std;

# define M 1000
# define CM 900
# define D 500
# define CD 400
# define C 100
# define XC 90
# define L 50
# define XL 40
# define X 10
# define IX 9
# define V 5
# define IV 4
# define I 1

int main(int argc, const char * argv[]) {
    int number;
    string result;
    cout << "Enter decimal number: \n";
    cin >> number;
    
    // input validation
    if (number <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    
    // convert process
    while (number > 0) {
        if (number >= M) {
            result += "M";
            number -= M;
        }
        else if (number >= CM) {
            result += "CM";
            number -= CM;
        }
        else if (number >= D) {
            result += "D";
            number -= D;
        }
        else if (number >= CD) {
            result += "CD";
            number -= CD;
        }
        else if (number >= C) {
            result += "C";
            number -= C;
        }
        else if (number >= XC) {
            result += "XC";
            number -= XC;
        }
        else if (number >= L) {
            result += "L";
            number -= L;
        }
        else if (number >= XL) {
            result += "XL";
            number -= XL;
        }
        else if (number >= X) {
            result += "X";
            number -= X;
        }
        else if (number >= IX) {
            result += "IX";
            number -= IX;
        }
        else if (number >= V) {
            result += "V";
            number -= V;
        }
        else if (number >= IV) {
            result += "IV";
            number -= IV;
        }
        else if (number >= I) {
            result += "I";
            number -= I;
        }
    }
    cout << result << endl;
    
    return 0;
}
