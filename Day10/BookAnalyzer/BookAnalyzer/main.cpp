//
//  main.cpp
//  BookAnalyzer
//
//  Created by Peng, Danfa  on 2022/9/2.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "bookanalyzer.hpp"

int main(int argc, const char * argv[]) {
    // initialization
    int charNum=0;
    std::string shortestWord, longestWord;
    std::vector<std::string> wordList;
    std::string title, author;
    
    // calling functions
    std::string inputfile = argv[1];
//    std::string inputfile = "cities.txt";
    wordList = extractWords(inputfile);
    findTitleAuthor(wordList, title, author);
    countCharNum(wordList, charNum);
    minMaxLengthWords(wordList, shortestWord, longestWord);
    
    // output result
    std::cout << "Statistics for " << title << " by " << author << "\n";
    std::cout << " Number of words: " << wordList.size() << "\n";
    std::cout << " Number of characters: " << charNum << "\n";
    std::cout << " The shortest word is: " <<shortestWord<< ", " <<
    "and the longest word is " << longestWord << "\n\n";
    
    std::string keyword = argv[2];
//    std::string keyword = "situation";
    findKeyWord(wordList, keyword, charNum);
    return 0;
}
