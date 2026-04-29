// Leetcode 121: Best Time to Buy Sell Stock
// Pattern: Greedy/ Single Pass
// Time Complexity: O(n)
// Space complexity: O(1)
// Date: 29-April-2026

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0;
        int bestBuy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if((prices[i] > bestBuy) ){
                maxProfit = max(maxProfit, (prices[i]-bestBuy));
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
