// Leetcode 1: Two Sum
// Pattern: Two Pointers/ HashMap
// Time complexity: O(n)
// Space complexity: O(n)
// Date: 29-April-2026

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i =0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()){
                return {i, mp[complement]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
