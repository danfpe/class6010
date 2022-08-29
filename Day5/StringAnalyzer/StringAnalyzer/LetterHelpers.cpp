//
//  LetterHelpers.cpp
//  StringAnalyzer
//
//  Created by Peng, Danfa  on 2022/8/30.
//

#include "LetterHelpers.hpp"

bool IsTerminator(char letter){
    if (letter == '.' || letter == '?' || letter == '!') {
        return true;
    }
    return false;
}

bool IsPunctuation(char letter) {
    if (letter == '.' || letter == '?' || letter == '!'
        || letter == ',') {
        return true;
    }
    return false;
}

bool IsVowel(char letter) {
    if (letter == 'a' || letter == 'A'
        || letter == 'e' || letter == 'E'
        || letter == 'i' || letter == 'I'
        || letter == 'o' || letter == 'O'
        || letter == 'u' || letter == 'U'
        || letter == 'y' || letter == 'Y') {
        return true;
    }
    return false;
}

bool IsConsonant(char letter) {
    if ((!IsVowel(letter)) && (!IsPunctuation(letter))
        && (letter != ' ')) {
        return true;
    }
    return false;
}

