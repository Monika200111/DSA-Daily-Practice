// Leetcode 238: Product of array except self
// Time complexity: O(n)
// Space Complexity: O(1)
// Solve using prefix suffix method
// Date: 02-May-2026

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int suffix = 1;
        
        for(int i=1; i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        
        for(int i=n-2; i>=0; i--){
            suffix = suffix*nums[i+1];
            ans[i] = ans[i]*suffix;
        }
        return ans;
    }
};
