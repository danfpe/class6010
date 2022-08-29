//
//  WordHelpers.hpp
//  StringAnalyzer
//
//  Created by Peng, Danfa  on 2022/8/30.
//

#ifndef WordHelpers_hpp
#define WordHelpers_hpp
#include <stdio.h>
#include <string>
using namespace std;

int NumSentences(string sentence);
int NumWords(string sentence);
int NumVowels(string sentence);
int NumConsonants(string sentence);
double AverageWordLength(string sentence);
double AverageVowelsPerWord(string sentence);
#endif /* WordHelpers_hpp */
