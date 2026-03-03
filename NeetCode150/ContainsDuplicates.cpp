#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numbersSeen = {};

        for (int number : nums){
            if (numbersSeen.contains(number)){
                return true;
            }
            else{
                numbersSeen.insert(number);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {1, 2, 3, 1};
    vector<int> test3 = {};
    vector<int> test4 = {5};
    vector<int> test5 = {7, 7, 7, 7};

    vector<vector<int>> tests = {test1, test2, test3, test4, test5};

    for (const auto& nums : tests) {
        cout << "Input: { ";
        for (int n : nums) {
            cout << n << " ";
        }
        
        cout << "}";

        bool result = sol.hasDuplicate(const_cast<vector<int>&>(nums));

        cout << "\nHas duplicate? "
             << (result ? "true" : "false") << "\n\n";
    }

    return 0;
}


