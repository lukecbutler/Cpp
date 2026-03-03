#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++){
            int buy = prices[i];
            for (int j = i + 1; j < prices.size(); j++){
                int sell = prices[j];
                max_profit = max(max_profit, sell - buy);
            }
        }

        return max_profit;
    }
};

int main(){

    vector<int> prices = {10,8,7,2,5};


    Solution Solution;
    cout << Solution.maxProfit(prices);



    return 0;
}
