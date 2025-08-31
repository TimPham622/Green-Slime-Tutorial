#include "Finder.h"
using namespace std;
#include <unordered_map>

vector<int> Finder::findSubstrings(string& s1, string& s2) {
    int n = s1.size(), m = s2.size();

    vector<int> pattern_index(m + 1, 0);
    {

        unordered_map<char, int> last_occurrence;
        for (int i = 1; i <= m; i++){
            if(last_occurrence.find(s2[i - 1]) != last_occurrence.end()) {
                pattern_index[i] = last_occurrence[s2[i - 1]];
            }
            last_occurrence[s2[i - 1]] = i;
        }
    }
    vector<int> result;
    int j = 0;
    for (int i = 0; i < n; i++){

        while (j > 0 && s1[i] != s2[j]){
            j = pattern_index[j];
        }

        if (s1[i] == s2[j]){
            if ((int)result.size() == j){
                result.push_back(i - j);
            }
            j++;
        }
        if (j == m){
            return result;
            break;
        }
    }

    result.push_back(-1);
    return result;
}