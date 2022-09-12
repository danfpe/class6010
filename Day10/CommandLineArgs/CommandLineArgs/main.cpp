//
//  main.cpp
//  CommandLineArgs
//
//  Created by Peng, Danfa  on 2022/9/3.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
  
    if (argc > 0) {
        std::string firstArg = argv[0];
        std::cout << firstArg;
    }
    return 0;
}
