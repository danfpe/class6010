//
//  main.cpp
//  StringAnalyzer
//
//  Created by Peng, Danfa  on 2022/8/27.
//

#include <iostream>
#include "LetterHelpers.hpp"
#include "WordHelpers.hpp"

using namespace std;

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
            exit(0);
        }
        
        // output result
        cout << "Analysis: " << endl;
        cout << " Number of words: " << NumWords(inputSentences) << endl;
        cout << " Number of sentences: " << NumSentences(inputSentences) << endl;
        cout << " Number of vowels: " << NumVowels(inputSentences) << endl;
        cout << " Number of consonants: " << NumConsonants(inputSentences) << endl;
        cout << " Reading level (average word length): " << AverageWordLength(inputSentences) << endl;
        cout << " Average vowels per word: " << AverageVowelsPerWord(inputSentences) << "\n\n";
    }
    return 0;
}
