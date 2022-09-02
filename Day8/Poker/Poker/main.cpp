//
//  main.cpp
//  Cards
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;
#include "cardsHelp.hpp"

int main(int argc, const char * argv[]) {
    // calling functions
    vector<Card> vectorCard = creatingCards();
    int times = 0;
    cout << "input the simulation times:" << "\n";
    cin >> times;
    int flushCount, straightCount, straightFlushCout, royalCount, fullHouseCount;
    flushCount = straightCount = straightFlushCout = royalCount = fullHouseCount = 0;
    for (int i = 0; i < times; i++) {
        shufflingCards(vectorCard);
        vector<Card> hand = pickingUpCards(vectorCard);
        if (isFlush(hand) == true) {
            flushCount++;
        }
        if (isStraight(hand)== true) {
            straightCount++;
        }
        if (isStraightFlush(hand) == true) {
            straightFlushCout++;
        }
        if (isRoyalFlush(hand) == true) {
            royalCount++;
        }
        if (isFullHouse(hand) == true) {
            fullHouseCount++;
        }
    }
    
    cout << "the statistics: " << "\n";
    cout << "Flush percentage: " << flushCount << (double) flushCount/times * 100 <<"%\n";
    cout << "Straight percentage: " << straightCount << (double) flushCount/times * 100 <<"%\n";
    cout << "StraightFlush percentage: " << straightFlushCout <<(double) straightFlushCout/times * 100 <<"%\n";
    cout << "RoyalFlush percentage: " << royalCount <<(double) royalCount/times * 100 <<"%\n";
    cout << "FullHouse percentage: " << fullHouseCount <<(double) fullHouseCount/times * 100 <<"%\n";
    
    return 0;
}
