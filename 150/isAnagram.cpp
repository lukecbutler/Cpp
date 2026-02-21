#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map <char, int> s1map;
        unordered_map <char, int> s2map;

        // create frequency map for s √
        for (char letter : s){
            s1map[letter]++;
        }

        // create frequency map for t √
        for (char letter : t){
            s2map[letter]++;
        }

        if (s1map == s2map){
            return true;
        }

        else{
            return false;
        }

        // Check if both frequency maps are the same
        return false;
    }
};


int main() {
    string s = "lime";
    string t = "mile";

    Solution mySolution; // Create an instance of the solution class

    bool result = mySolution.isAnagram(s, t); // Class the method isAnagram on that instance of the class

    return 0;
}
