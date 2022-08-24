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
    
    cout << "whether or not it's a weekday(Y/N)" << endl;
    cin >> weekdayResponse;
    cout << "whether or not it's a holiday(Y/N)" << endl;
    cin >> holidayResponse;
    cout << "Please enter whether or not you have young children(Y/N)" << endl;
    cin >> haveChildResponse;
    
    if (haveChildResponse == 'Y' || haveChildResponse == 'y') {
        cout << "no sleep today" << endl;
    }
    else if (weekdayResponse == 'N' || weekdayResponse == 'n') {
        cout << "get to sleep today" << endl;
    }
    else if (holidayResponse == 'Y' || holidayResponse == 'y')
        cout << "get to sleep today" << endl;
    else
        cout << "no sleep today" << endl;
    return 0;
}
