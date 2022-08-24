//
//  main.cpp
//  Average
//
//  Created by Peng, Danfa  on 2022/8/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int score0, score1, score2, score3, score4;
    cout << "Enter 5 assignment scores:\n";
    cin >> score0;
    cin >> score1;
    cin >> score2;
    cin >> score3;
    cin >> score4;
    float average = (score0 + score1 + score2 + score3 + score4)/5.0;
    cout << "Average: " << average << "\n";
    return 0;
}
