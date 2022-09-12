//
//  main.cpp
//  HelloWorld
//
//  Created by Peng, Danfa  on 2022/8/23.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //create a file, write to it
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "I am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    string filename = "input.txt";
    ifstream myStream(filename);
    string word1, word2;
    myStream >> word1 >> word2;
    while (myStream >> word1) {
        cout << "read in " << word1 << "\n";
    }
    return 0;
}
