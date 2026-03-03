#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> word_map;

        for (string word : strs){
            string word_sorted = word;
            sort(word_sorted.begin(), word_sorted.end()); // sort the copy of the word
            word_map[word_sorted].push_back(word);
        }
        
        vector<vector<string>> anagrams_sorted= {};

        for (const auto& group : word_map){
            anagrams_sorted.push_back(group.second);
        }

        return anagrams_sorted;
    }
};


int main() {
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};

    Solution mySolution; // Create an instance of the solution Class

    mySolution.groupAnagrams(strs);

    return 0;
}