//
//  main.cpp
//  Palindromes
//
//  Created by Peng, Danfa  on 2022/8/26.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string inputString, reversedString;
    cout << "Please enter a word: \n" << endl;
    cin >> inputString;
    reversedString = inputString;
    int n = 0;
    for(int i = inputString.length() - 1; i >= 0; i--) {
        reversedString[n] = inputString[i];
        n++;
    }
    if (inputString == reversedString) {
        cout << "this is palindromes" << endl;
    }
    else {
        cout << "this is not a palindromes" << endl;
    }
    return 0;
}
