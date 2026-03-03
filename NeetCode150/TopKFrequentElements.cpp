#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    void topKFrequent(vector<int>& nums, int k) {
        map <int, int> frequency_map; // init frequency map
        // loop through vector of integer 'nums'
        // number is the variable name of each element
        // number set as key, 1 set as value. if number alread exists, increment number
        for (int number : nums){ 
            frequency_map[number]++;
        }

        // Build max heap with pair as datatype. pair consists of int,int
        // named is pq
        priority_queue<pair<int,int>> pq;

        // loop thorugh the frequency map
        // pair is name of vaiable. const auto& deduces the type
        for (const auto& pair : frequency_map){
            pq.push({pair.second, pair.first}); 
            // for each pair in the frequency map, add the second(value) and first(key) to the priority queue
            // second is added fist because we are returning the most common element from the array.
            // pair<int,int>> orders by the first item in the pair by default, so the pq is ordered by count
            // second -> count
            // first -> element
        }

        // Pop k times to get k most frequent
        vector<int> result;
        for (int i = 0; i < k; i++){
            result.push_back(pq.top().second); // .second now refers to the number, not the count, as the pairs were inputted into the pq flipped on insertion
            pq.pop();
        }

        cout << "\n\n-----------------------------------\n";
        cout << "Frequency Map:\n";


        for (const auto& i : frequency_map){
            cout << i.first << ": " << i.second << endl;
        }


    }
};


int main() {
    vector<int> nums = {1,2,2,3,3,3,4};
    int k = 2;

    Solution mySolution; // Create an instance of the solution Class

    mySolution.topKFrequent(nums, k);

    return 0;
}