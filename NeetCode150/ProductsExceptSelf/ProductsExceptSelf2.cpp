// Division Algorithm Approach O(n)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void productExceptSelf2(vector<int>& nums) {
        int zero_count = 0; // must be initalized with 0. does NOT start with 0. Will start with a random ass number
        int max_product = 1; // ALWAYS init a variable with a value, it'll usually be 0 or 1
        vector<int> results;

        // Loop through nums. 1. increment zero count, 2. find max product (all non-zero ints multiplied together)
        for (int num : nums){
            if (num == 0){
                zero_count++;
                continue;
            }
            max_product = max_product * num;
        }   
        
        // Loop through nums. Checks: 1. if 2 Zeros, 2. if 1 Zero, 3. if no zeros
        for (int num : nums){ 
            if (zero_count >= 2){// If 2 zeros, push nums.size() number of zeros to result vector
                results.push_back(0);
                continue;
            }

            if (zero_count == 1 && num != 0){
                results.push_back(0);
                continue;
            }

            if (zero_count == 1 && num == 0){
                results.push_back(max_product);
                continue;
            }

            results.push_back(max_product / num);



        }

        for (int num : results){ // print out results
            cout << num << endl;
        }
    }
};

int main() {
    vector<int> nums = {1,2,4,6};

    Solution mySolution; // Create an instance of the solution Class

    mySolution.productExceptSelf2(nums);

    return 0;
}