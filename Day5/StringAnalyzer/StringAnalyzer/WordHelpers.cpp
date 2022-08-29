//
//  WordHelpers.cpp
//  StringAnalyzer
//
//  Created by Peng, Danfa  on 2022/8/30.
//

#include "WordHelpers.hpp"
#include "LetterHelpers.hpp"
using namespace std;

int NumSentences(string sentence) {
    int num = 0;
    // traverse the sentences
    for(int i=0; i < sentence.length(); i++) {
        if (IsTerminator(sentence[i])) {
            num++;
        }
    }
    return num;
}

int NumWords(string sentence) {
    int num = 0;
    // traverse the sentences
    for(int i=0; i < sentence.length(); i++) {
        if (sentence[i] == ' '){
            num++;
        }
    }
    return num + 1;
}

int NumVowels(string sentence) {
    int num = 0;
    // traverse the sentences
    for(int i=0; i < sentence.length(); i++) {
        if (IsVowel(sentence[i])) {
            num++;
        }
    }
    return num;
}

int NumConsonants(string sentence) {
    int num = 0;
    // traverse the sentences
    for(int i=0; i < sentence.length(); i++) {
        if (IsConsonant(sentence[i])) {
            num++;
        }
    }
    return num;
}

double AverageWordLength(string sentence) {
    return (NumVowels(sentence) + NumConsonants(sentence))*1.0/NumWords(sentence);
}

double AverageVowelsPerWord(string sentence) {
    return NumVowels(sentence)*1.0/NumWords(sentence);
}
