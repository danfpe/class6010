//
//  cardsHelp.hpp
//  Cards
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#ifndef cardsHelp_hpp
#define cardsHelp_hpp

#include <string>
#include <vector>
// create Card type
struct Card {
    std::string suit;
    std::string rank;
};

// signarue
std::vector<Card> creatingCards();
void printingCards(std::vector<Card> cardVector);
void shufflingCards(std::vector<Card>& cardVector);
std::vector<Card> pickingUpCards(std::vector<Card>& cardVector);
bool isFlush(std::vector<Card> cardVector);
bool isStraight(std::vector<Card> cardVector);
bool isStraightFlush(std::vector<Card> cardVector);
bool isRoyalFlush(std::vector<Card> cardVector);
bool isFullHouse(std::vector<Card> cardVector);
#endif /* cardsHelp_hpp */
