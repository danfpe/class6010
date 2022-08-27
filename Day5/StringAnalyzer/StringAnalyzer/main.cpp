//
//  main.cpp
//  StringAnalyzer
//
//  Created by Peng, Danfa  on 2022/8/27.
//

#include <iostream>
using namespace std;

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

int main(int argc, const char * argv[]) {
    // initialization
    string inputSentences;
    
    // repeated ask user to input string
    while (true) {
        std::cout << "Enter a string containing one or more sentences:\n";
        getline(cin, inputSentences);
        
        // input checking
        if (inputSentences == "done") {
            cout << "Goodbye" << endl;
            break;
        }
        
        // output result
        cout << "Number of words: " << NumWords(inputSentences) << endl;
        cout << "Number of sentences: " << NumSentences(inputSentences) << endl;
        cout << "Number of vowels: " << NumVowels(inputSentences) << endl;
        cout << "Number of consonants: " << NumConsonants(inputSentences) << endl;
        cout << "Reading level (average word length): " << AverageWordLength(inputSentences) << endl;
        cout << "Average vowels per word: " << AverageVowelsPerWord(inputSentences) << endl;
    }
    return 0;
}
