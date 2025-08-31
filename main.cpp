#include <iostream>
#include <vector>
#include <string>
#include "Finder.h"

int main() {
    std::string s1 = "734658732465";
    std::string s2 = "463";

    std::vector<int> indices = Finder::findSubstrings(s1, s2);
    
    std::cout << "Indices of substrings of " << s2 << " in " << s1 << ": ";
    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}