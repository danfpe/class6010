//
//  politician.hpp
//  PoliStructs
//
//  Created by Peng, Danfa  on 2022/8/31.
//

#ifndef politician_hpp
#define politician_hpp
#include <string>
#include <vector>

struct Politician {
    std::string name;
    std::string party;
    std::string state_or_federal;
};

std::vector<Politician> Javacans(std::vector<Politician> politicians);
std::vector<Politician> federalCplusers(std::vector<Politician> politicians);

#endif /* politician_hpp */
