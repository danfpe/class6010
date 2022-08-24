//
//  main.cpp
//  IfStatementPractice
//
//  Created by Peng, Danfa  on 2022/8/25.
//

#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    // Part 1
    cout << "Please input your age:\n";
    int age = 0;
    cin >> age;
    if (age >= 18) {
        cout << "old enough to vote" << endl;
    }
    
    if (age > 25) {
        cout << "old enough to run for senate" << endl;
    }
    
    if (age > 80) {
        cout << "greatest generation" << endl;
    }
    else if (age > 60) {
        cout << "baby boomers" << endl;
    }
    else if (age > 40) {
        cout << "generation X" << endl;
    }
    else if (age > 20) {
        cout << "millennial" << endl;
    }
    else {
        cout << "iKid" << endl;
    }
    
    // Part 2
    char weekdayResponse = 'N';
    char holidayResponse = 'N';
    char haveChildResponse = 'N';
    char isSleep = 'N';
    
    cout << "whether or not it's a weekday(Y/N)" << endl;
    cin >> weekdayResponse;
    cout << "whether or not it's a holiday(Y/N)" << endl;
    cin >> holidayResponse;
    cout << "Please enter whether or not you have young children(Y/N)" << endl;
    cin >> haveChildResponse;
    cout << "whether the user gets to sleep in today or not(Y/N)" << endl;
    cin >> isSleep;
    
    if (weekdayResponse == 'Y') {
        cout << "It's a weekday \n";
    }
    else {
        cout << "It's not a weekday \n";
    }
    
    if (holidayResponse == 'Y') {
        cout << "It's a holiday\n";
    }
    else {
        cout << "It's not a holiday\n";
    }
    
    if (haveChildResponse == 'Y') {
        cout << "have children\n";
    }
    else {
        cout << "no children\n";
    }
    
    if (isSleep == 'Y') {
        cout << "get to sleep today\n";
    }
    else {
        cout << "no sleep\n";
    }
    
    return 0;
}
