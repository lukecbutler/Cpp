#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    unordered_map <char, int> myMap; // Create dictionary for frequencyMap
    string myWord = "NASA";

    
    // create frequency map of myWord
    for (char letter : myWord){
        myMap[letter]++;
    }

    // print out dictionary
    for (auto i : myMap){
        cout << i.first << ": " << i.second << endl;
    }


    // Add {L:2}
    myMap.insert({'L',2}); // in C++, characters must always be in single quotation marks, not double quotation marks
    
    


    return 0;
}