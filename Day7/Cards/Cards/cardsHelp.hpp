//
//  cardsHelp.hpp
//  Cards
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#ifndef cardsHelp_hpp
#define cardsHelp_hpp

#include <stdio.h>
#include <string>

// create Card type
struct Card {
    std::string suit;
    std::string rank;
};

// signarue
std::vector<Card> creatingCards();
void printingCards(std::vector<Card> cardVector);

#endif /* cardsHelp_hpp */
