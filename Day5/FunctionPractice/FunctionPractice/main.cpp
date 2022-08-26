//
//  main.cpp
//  FunctionPractice
//
//  Created by Peng, Danfa  on 2022/8/27.
//

#include <iostream>
#include <cmath>
using namespace std;

float calcHypotenuse(float a, float b) {
    return sqrt(pow(a,2) + pow(b,2));
}

struct velocitySplit {
    double velocity_x, velocity_y;
};

typedef struct velocitySplit Struct;

Struct calcVelocity(double speed, double angle) {
    Struct velocity;
    velocity.velocity_x = speed*cos(angle);
    velocity.velocity_y = speed*sin(angle);
    return velocity;
}

string isCapitalized(string inputString) {
    inputString[0] = toupper(inputString[0]);
    return inputString;
}

string boolToString(bool boolValue) {
    return boolValue ? "true" : "false";
}

bool isPrimeNumber(int numInput) {
    // consider the edge case
    if ((numInput == 0) || (numInput == 1)) {
        return true;
    }
    
    for (int i=2; i <= numInput/2; i++) {
        if (numInput % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // part 1.a, calculate hypotenuse
    float leg_a, leg_b;
    cout << "please input the first length:\n";
    cin >> leg_a;
    cout << "please input the second length:\n";
    cin >> leg_b;
    cout << "The length of hypotenuse: " << sqrt(pow(leg_a,2) + pow(leg_b,2)) << "\n\n";
    
    // part 1.b, calculate velocit in x,y direction
    double velocity, angle;
    cout << "please input velocity:\n";
    cin >> velocity;
    cout << "please input angle: \n";
    cin >> angle;
    cout << "x velocity: " << velocity*cos(angle) << endl;
    cout << "y velocity: " << velocity*sin(angle) << "\n\n";
    
    // part 1.c
    time_t result = time(nullptr);
    cout << asctime(localtime(&result))
    << result << " seconds since the Epoch\n\n"; // using time(), localtime(), asctime() funcitons
    
    // part 2, refactor part 1.a, encapsulate the logic into function
    cout << "The length of hypotenuse: " << calcHypotenuse(3,4) << "\n\n";
    
    // part 2, refactor part 1.b, use struct type to hold two values
    Struct speedResult = calcVelocity(10, 1.7);
    cout << "x velocity: "<< speedResult.velocity_x << endl;
    cout << "y velocity: "<< speedResult.velocity_y << "\n\n";
    
    // part 2, capitalize
    string userString;
    cout << "Please input a string: \n";
    cin >> userString;
    cout << "Capitalized string: " << isCapitalized(userString) << "\n\n";
    
    // part 2, bool to string
    bool is_print = true;
    string boolString = boolToString(is_print);
    if (boolString == "true") {
        cout << "Capitalized string: " << isCapitalized(userString) << "\n\n";
    }
    else {
        cout << "can not print capitalized string \n\n";
    }
    
    // part 2, is prime
    int numInput;
    bool is_Prime = true;
    cout << "Please input a positive number: \n";
    cin >> numInput;
    is_Prime = isPrimeNumber(numInput);
    if (is_Prime) {
        cout << numInput << " is a prime number" << endl;
    }
    else {
        cout << numInput << " is not a prime number" << endl;
    }
    
    return 0;
}
