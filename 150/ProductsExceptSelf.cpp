#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int max_product = 1;
        int zero_count = 0;

        for(int num : nums){ // multiply all elements in nums together to get max product - skip 0's
            if(num == 0){
                zero_count++;
                continue;
            }
            max_product = max_product * num;
        }

        cout << max_product << endl << endl;

        vector<int> result = {}; // create result vector
        for(int num: nums){
            if (num != 0 && zero_count > 0){ // if num is not zero, and zero is in nums, push 0 to array
                result.push_back(0);
                continue;
            }

            // if num is only zero in vector, push max_product to vector
            if (num == 0 && zero_count == 1){
                result.push_back(max_product);
                continue;
            }

            // if 2 or more zero's exist in nums, push nums.size() number of 0's to result
            if (zero_count > 1){
                result.push_back(0);
                continue;
            }

            result.push_back(max_product / num);
        }

        return result;
    }
};

int main() {
    vector<int> nums = {-1,0,1,0,3};

    Solution mySolution; // Create an instance of the solution Class

    mySolution.productExceptSelf(nums);

    return 0;
}