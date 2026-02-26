// Brute Force Approach (O(n^2))

#include <vector>
#include <set>
#include <iostream>
using namespace std;

void ProductsExceptSelf1(vector<int>& nums){
    vector<int> result = {};
    for(int i = 0; i < nums.size(); i++){
        int output_value = 1;
        for(int j = 0; j < nums.size(); j++){
            if (i == j){continue;}
            output_value = output_value * nums[j];
        }
        cout << output_value << endl;
        result.push_back(output_value);
    }
}

int main(){
    vector<int> nums = {1,2,4,8};
    ProductsExceptSelf1(nums);
    return 0;
}