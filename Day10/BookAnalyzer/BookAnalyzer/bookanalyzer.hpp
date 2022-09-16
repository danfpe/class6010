//
//  bookanalyzer.hpp
//  BookAnalyzer
//
//  Created by Peng, Danfa  on 2022/9/4.
//

#ifndef bookanalyzer_hpp
#define bookanalyzer_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

std::vector<std::string> extractWords(const std::string& filename);
void findTitleAuthor(std::vector<std::string>& wordList, std::string& title, std::string& author);
void countCharNum(std::vector<std::string>& wordList, int& charNum);
void minMaxLengthWords(const std::vector<std::string> & wordList, std::string& minWord, std::string& maxWord);
void findKeyWord(const std::vector<std::string> & wordList, std::string keyword, int charNum);


#endif /* bookanalyzer_hpp */
