//
//  main.cpp
//  ForLoopPractice
//
//  Created by Peng, Danfa  on 2022/8/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // print number from 1 to 10
    // for loop, which is better in this case
    for(int i=1; i<11; i++) {
        cout << i << endl;
    }
    // while loop
    int n = 1;
    while(n < 11) {
        cout << n << endl;
        n++;
    }
    
    // print numbers between interval
    int first = 0, second = 0;
    cout << "Please input two numbers, the first one should smaller than the second one\n";
    cin >> first;
    cin >> second;
    while(first <= second) {
        cout << first << endl;
        first++;
    }
    
    // odd numbers, no if statement, prefer this one
    for(int odd=1; odd <= 20; odd+=2) {
        cout << odd << endl;
    }
    // odd number, if statement
    for(int number = 1; number <= 20; number++) {
        if (number % 2 !=0)
            cout << number << endl;
    }
    
    // sum number
    int positive_number = 1;
    int sum = 0;
    while (positive_number >= 0) {
        cout << "Please input numbers to sum up\n";
        cin >> positive_number;
        if (positive_number >=0){
            sum += positive_number;
        }
    }
    cout << "the sum of numbers: " << sum << endl;
    
    // multiplication table
    for(int row = 1; row < 6; row++){
        cout << row << "x*: ";
        for(int col = 1; col < 6; col++) {
            cout << row * col << " ";
        }
        cout << endl;
    }
    
    return 0;
}
