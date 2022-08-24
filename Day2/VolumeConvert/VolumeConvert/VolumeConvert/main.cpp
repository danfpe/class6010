//
//  main.cpp
//  VolumeConvert
//
//  Created by Peng, Danfa  on 2022/8/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int ounces;
    cout << "Enter volumn in ounces:\n";
    cin >> ounces;
    cout << "Ounces: " << ounces << "\n";
    cout << "Cups: " << ounces/8.0 << "\n";
    cout << "Pins: " << ounces/16.0 << "\n";
    cout << "Gallons: " << ounces/128.0 << "\n";
    cout << "Liters: " << ounces*0.0296 << "\n";
    cout << "Liters: " << ounces*1.8 << "\n";
    return 0;
}
