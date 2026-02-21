#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> index_map; // init map
        // build index map {element:index}
        for (int i = 0 ; i < nums.size() ; i++){
            index_map[nums[i]] = i; 
        }

        // Loop through nums
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i]; // Get complement 
            if (index_map.contains(complement) && i != index_map.at(complement)){ // 
                return {i, index_map.at(complement)};
            }
        }
    }
};


int main(){

    vector<int> nums = {3,4,5,6};
    int target = 7;

    Solution mySolution; // Create an instance of the solution class

    vector result = mySolution.twoSum(nums, target); 
    for (int number : result){
        cout << number << endl;
    }

    return 0;
}