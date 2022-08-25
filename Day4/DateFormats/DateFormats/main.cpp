//
//  main.cpp
//  DateFormats
//
//  Created by Peng, Danfa  on 2022/8/26.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
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
    
    // month converter
    if (month == "1" || month == "01") {
        month = "January";
    }
    else if (month == "2" || month == "02") {
        month = "February";
    }
    else if (month == "3" || month == "03") {
        month = "March";
    }
    else if (month == "4" || month == "04") {
        month = "April";
    }
    else if (month == "5" || month == "05") {
        month = "May";
    }
    else if (month == "6" || month == "06") {
        month = "June";
    }
    else if (month == "7" || month == "07")
        month = "July";
    else if (month == "8" || month == "08")
        month = "August";
    else if (month == "9" || month == "09")
        month = "September";
    else if (month == "10")
        month = "October";
    else if (month == "11")
        month = "November";
    else if (month == "12")
        month = "December";
    else{
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
        
    cout << month << " " << day << ", " << year << endl;
    
    return 0;
}
