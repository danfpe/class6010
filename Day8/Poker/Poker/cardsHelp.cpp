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
#include <cstdlib>
#include <time.h>
#include <cmath>
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

void swapCards(Card& card1, Card& card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

// Shuffling cards
void shufflingCards(vector<Card>& cardVector) {
    const int N = 52;
    for(int i = N - 1; i > 0; i--) {
        int randNum = std::rand()%i;
        srand (time(NULL));
        swapCards(cardVector[i], cardVector[randNum]);
    }
}

vector<Card> pickingUpCards(vector<Card>& cardVector) {
    vector<Card> hand;
    const int Number = 5;
    for(int i = 0; i < Number; i++) {
        hand.push_back(cardVector[i]);
    }
    return hand;
}

bool isFlush(vector<Card>& cardVector) {
    for(int i=0; i<4; i++) {
        if (cardVector[i].suit != cardVector[i+1].suit) {
            return false;
        }
    }
    return true;
}

// convert string rank to integer value
int stringRankToInt(string stringRank) {
    int rank;
    if(stringRank == "J"){
        rank = 11;
    }
    else if (stringRank == "Q") {
        rank = 12;
    }
    else if (stringRank == "K") {
        rank = 13;
    }
    else if (stringRank == "A") {
        rank = 14;
    }
    else {
        rank = stoi(stringRank);
    }
    return rank;
}

vector<int> extractRank(vector<Card>& cardVector) {
    vector<int> rankVector;
    for (auto card:cardVector) {
        rankVector.push_back(stringRankToInt(card.rank));
    }
    return rankVector;
}

bool compareRank(const Card & a, const Card & b) {
    return a.rank < b.rank;
}

bool isStraight(vector<Card>& cardVector) {
    vector<int> cardRank = extractRank(cardVector);
    sort(cardRank.begin(), cardRank.end());
    
    for(int i = 0; i < cardRank.size() - 1; i++) {
        if (cardRank[i+1] - cardRank[i] != 1) {
            return false;
        }
    }

    return true;
}

bool isStraightFlush(vector<Card>& cardVector) {
    return (isFlush(cardVector) && isStraight(cardVector));
}

bool isRoyalFlush(vector<Card>& cardVector) {
    vector<int> rankVector;
    if (isStraightFlush(cardVector)) {
        rankVector = extractRank(cardVector);
        sort(rankVector.begin(), rankVector.end());
        if (rankVector[0] == 10) {
            return true;
        }
    }
    return false;
}

bool isFullHouse(vector<Card>& cardVector)
{
    vector<int> rankVector = extractRank(cardVector);
    sort(rankVector.begin(), rankVector.end());
    if ((rankVector[0] == rankVector[1]) && (rankVector[2] == rankVector[3]) && (rankVector[3] == rankVector[4])){
        return true;
    }
    else if ((rankVector[0] == rankVector[1]) && (rankVector[2] == rankVector[3]) && (rankVector[3] == rankVector[4])) {
        return true;
    }
    return false;
}
    
    
