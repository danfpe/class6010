//
//  main.cpp
//  MagicDates
//
//  Created by Peng, Danfa  on 2022/8/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    // input date
    string inputString;
    cout << "Enter a date: \n";
    cin >> inputString;
    
    // extract month, day, year
    int stringLen = inputString.length();
    int firstSlash = inputString.find("/");
    string month = inputString.substr(0, firstSlash); // extract month
    
    string dayAndYear = inputString.substr(firstSlash + 1, inputString.length() - 1);
    int secondSlash = dayAndYear.find("/"); // find the second slash
    string day = dayAndYear.substr(0, secondSlash); // extract day
    string year = dayAndYear.substr(secondSlash + 1, dayAndYear.length() - 1);// extract year
    
    // date validation
    if ((stoi(month) < 1) || (stoi(month) > 12)) {
            cout << "Invalid Date" << endl;
            return 0;
        }
    
    if ((stoi(day) < 1) || (stoi(day) > 31)) {
        cout << "Invalid Date" << endl;
        return 0;
    }
    
    if (year.length() < 4) {
        cout << "Invalid Date" << endl;
        return 0;
    }
    
    // extract last two digits from year
    int yearLen = year.length();
    string lastTwoDigits = year.substr(yearLen - 2,yearLen - 1);
    
    // magic date logic
    if (stoi(month) * stoi(day) == stoi(lastTwoDigits)) {
        cout << inputString << " is a magic date" << endl;
    }
    else {
        cout << inputString << " is not a magic date" << endl;
    }
    
    return 0;
}
