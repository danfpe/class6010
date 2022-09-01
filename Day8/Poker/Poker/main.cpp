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
    shufflingCards(vectorCard);
    vector<Card> hand = pickingUpCards(vectorCard);
    
    // sample hands
    hand = {{"Hearts", "A"}, {"Hearts", "K"}, {"Hearts", "Q"}, {"Hearts", "J"}, {"Hearts", "10"}};
    vector<Card> full_house = {{"Hearts", "A"}, {"Diamonds", "A"}, {"Clubs", "10"}, {"Hearts", "10"}, {"Spades", "10"}};
    printingCards(hand);
    cout << "\n";
    
    // test cases
    assert(isFlush(hand) == true);
    assert(isStraight(hand)== true);
    assert(isStraightFlush(hand) == true);
    assert(isRoyalFlush(hand) == true);
    assert(isFullHouse(full_house) == true);
    
    cout << "test passed" << "\n";
    return 0;
}
