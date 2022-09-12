//
//  bookanalyzer.cpp
//  BookAnalyzer
//
//  Created by Peng, Danfa  on 2022/9/4.
//

#include "bookanalyzer.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

std::vector<std::string> extractWords(std::string filename){
    std::vector<std::string> wordList;
    std::string word;
    std::string word1;
    std::ifstream myStream(filename);
    while (myStream >> word >> word1) {
        std::cout << word << " " << word1;
    }
    if(myStream.fail()) {
        std::cout << "Failed to open file.\n";
        exit(1);
    }
    while(myStream >> word){
        wordList.push_back(word);
    }
    return wordList;
}

void findTitleAuthor(std::vector<std::string>& wordList, std::string& title, std::string& author) {
    int NUM = 100;
    int titlePos, authorPos, releasePos;
    titlePos = authorPos = releasePos = -1;
    for(int i = 0; i < NUM; i++) {
        if (wordList[i].find("Title") != std::string::npos) {
            titlePos = i;
        }
        else if (wordList[i].find("Author") != std::string::npos) {
            authorPos = i;
        }
        else if (wordList[i].find("Release") != std::string::npos) {
            releasePos = i;
            break;
        }
    }
    if (titlePos == -1 || authorPos == -1 || releasePos == -1) {
        title = "unknown";
        author = "unknown";
    }
    
    for(int i = titlePos + 1; i < authorPos; i++) {
        title = title + " " + wordList[i];
    }
    
    for(int i = authorPos + 1; i < releasePos; i++) {
        author = author + " " + wordList[i];
    }
}

void countCharNum(std::vector<std::string>& wordList, int& charNum) {
    for(int i = 0; i < wordList.size(); i++) {
        charNum += wordList[i].length();
    }
}

void minMaxLengthWords(const std::vector<std::string> & wordList, std::string& minWord, std::string& maxWord) {
    int minLen, maxLen, minLoc, maxLoc;
    minLoc = maxLoc = 0;
    minLen = maxLen = wordList[0].length();
    for(int i = 1; i < wordList.size(); i++) {
        if (minLen > wordList[i].length()) {
            minLen = wordList[i].length();
            minLoc = i;
        }
        
        if (maxLen < wordList[i].length()) {
            maxLen = wordList[i].length();
            maxLoc = i;
        }
    }
    minWord = wordList[minLoc];
    maxWord = wordList[maxLoc];
}

void findKeyWord(const std::vector<std::string> & wordList, std::string keyword, int charNum) {
    int position = 0;
    std::vector<std::vector<int> > positionList;
    std::vector<float> percentage;
    
    // search for key word
    for(int i = 0; i < wordList.size(); i++) {
        if (wordList[i].find(keyword)!= std::string::npos) {
            percentage.push_back((float) position/charNum*100);
            std::vector<int> row;
            row.push_back(i - 1);
            row.push_back(i);
            row.push_back(i + 1);
            positionList.push_back(row);
        }
        position += wordList[i].length();
    }
    
    // not found
    if (percentage.size() == 0) {
        std::cout << "not find key word in text file \n";
        return;
    }
    
    // output result
    std::cout << "The word "<< keyword << " appears " << percentage.size() << " times" << "\n";
    for (int j = 0; j < positionList.size(); j++){
        std::cout <<"  at "<< percentage[j]<< "%: " << wordList[positionList[j][0]]<<" "<< wordList[positionList[j][1]]<<" "<<
            wordList[positionList[j][2]]<< "\n";
    }
}
