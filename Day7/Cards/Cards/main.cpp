//
//  main.cpp
//  Cards
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#include <iostream>
#include <vector>
#include "cardsHelp.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // calling functions
    vector<Card> vectorCard = creatingCards();
    printingCards(vectorCard);
    return 0;
}
