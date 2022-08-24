//
//  main.cpp
//  GiveChange
//
//  Created by Peng, Danfa  on 2022/8/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int price = -1;
    int paidAmout = -1;
    int change = -1;
    cout << "Enter item price in cents: \n";
    cin >> price;
    cout << "Enter amount paid in cents: \n";
    cin >> paidAmout;
    change = paidAmout - price;
    cout << "Change = "<< change << "\n";
    cout << " Quarters: " << change/25 << "\n";
    int remainder = change % 25;
    cout << " Dimes: " << remainder/10 << "\n";
    remainder = remainder % 10;
    cout << " Nickels: " << remainder/5 << "\n";
    remainder = remainder % 5;
    cout << " Pennies: " << remainder << "\n";
    return 0;
}
