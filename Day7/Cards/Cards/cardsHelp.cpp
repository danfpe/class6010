//
//  cardsHelp.cpp
//  Cards
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#include "cardsHelp.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//initialization
vector<string> rankVector = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
vector<string> suitVecor = {"Hearts", "Diamonds", "Clubs", "Spades"};

//creating cards
vector<Card> creatingCards() {
    vector<Card> cardVector;
    for(int i=0; i < 4; i++){
        for(int j=0; j < 13; j++){
            Card card {suitVecor[i], rankVector[j]};
            cardVector.push_back(card);
        }
    }

    return cardVector;
}

//print cards
void printingCards(vector<Card> cardVector) {
    for(Card card: cardVector) {
        cout <<"card rank: "<< card.rank << " card suit: " << card.suit << "\n";
    }
}
    
