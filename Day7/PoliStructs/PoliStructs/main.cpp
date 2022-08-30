//
//  main.cpp
//  PoliStructs
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#include <iostream>
#include <assert.h>
#include "politician.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // initialization
    vector<Politician> politicians = {{"John", "Cplusers", "state"},
        {"Lucy", "Javacans", "federal"}
    };
    vector<Politician> javacanVector, cplusterVector;
    javacanVector = Javacans(politicians);
    cplusterVector = federalCplusers(politicians);
    
    // check javacan
    for (Politician politician: javacanVector) {
        assert(politician.party == "Javacans");
    }
    
    // check javacan
    for (Politician politician: cplusterVector) {
        assert(politician.party == "Cplusers");
    }
    
    cout << "test passed" << endl;
    return 0;
}
