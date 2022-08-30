//
//  politician.cpp
//  PoliStructs
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#include "politician.hpp"
#include <vector>
using namespace std;


vector<Politician> Javacans(vector<Politician> politicians) {
    vector<Politician> javacanVector;
    for(Politician politician: politicians) {
        if(politician.party == "Javacans") {
            javacanVector.push_back(politician);
        }
    }
    return javacanVector;
}


vector<Politician> federalCplusers(vector<Politician> politicians) {
    vector<Politician> cplusterVector;
    for(Politician politician: politicians) {
        if(politician.party == "Cplusers") {
            cplusterVector.push_back(politician);
        }
    }
    return cplusterVector;
}

