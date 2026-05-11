// Leetcode 1480: Running sum of 1d array
// Time complexity: O(n)
// Space complexity: O(1)
// Date: 11-May-2026

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int sum = 0;
        for(int i =0; i<n; i++){
            sum = sum+nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
