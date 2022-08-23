//
//  main.cpp
//  RoadTripCalculator
//
//  Created by Peng, Danfa  on 2022/8/24.
//

#include <iostream>
using namespace std;

float calcNumberofGallons (int distance, float milesPerGallon) {
    return distance / milesPerGallon;
}

float calcWholeCost(float numberOfGallons, float costPerGallon) {
    return numberOfGallons * costPerGallon;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int drivingDistance;
    float milesPerGallon;
    float costPerGallon;
    cout << "Enter driving distance:" << endl;
    cin >> drivingDistance;
    cout << "Enter miles per gallon:" << endl;
    cin >> milesPerGallon;
    cout << "Enter cost per gallon:" << endl;
    cin >> costPerGallon;
    float numberOfGallons =  calcNumberofGallons(drivingDistance, milesPerGallon);
    float wholeCost = calcWholeCost(numberOfGallons, costPerGallon);
    cout << "number of gallons: " << numberOfGallons << endl;
    cout << "the whold of cost: " << wholeCost << endl;
    return 0;
}
